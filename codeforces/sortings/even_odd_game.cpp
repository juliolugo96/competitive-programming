#include <bits/stdc++.h>

#define ALICE true
#define BOB false

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;
  while (t--)
  {
    int n;

    long odds[static_cast<long>(2e5 + 1)]{0}, evens[static_cast<long>(2e5 + 1)]{0};
    cin >> n;
    int odds_i{0}, evens_i{0};

    for (int i{0}; i < n; ++i)
    {
      long a;
      cin >> a;

      a & 1 ? odds[odds_i++] = a : evens[evens_i++] = a;
    }

    // cout << "its: " << evens_i << " "
    //      << " odds_i: " << odds_i << "\n";

    sort(begin(evens), begin(evens) + evens_i);
    sort(begin(odds), begin(odds) + odds_i);

    reverse(begin(evens), begin(evens) + evens_i);
    reverse(begin(odds), begin(odds) + odds_i);

    bool turn = ALICE;
    int i{0}, j{0};
    long long res{0};

    while (evens[i] != 0 or odds[j] != 0)
    {
      // cout << "Evens[" << i << "]: " << evens[i] << "\t\t Odds[" << j << "]: " << odds[j] << "\n";

      if (evens[i] > odds[j])
      {
        res += turn ? evens[i] : 0;
        i++;
      }
      else
      {
        res -= !turn ? odds[j] : 0;
        j++;
      }

      turn = !turn;
    }

    if (res == 0)
      cout << "Tie\n";
    else
      cout << (res > 0 ? "Alice\n" : "Bob\n");
  }

  return 0;
}