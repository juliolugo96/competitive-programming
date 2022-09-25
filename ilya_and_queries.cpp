# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;

  cin >> s;

  int m;
  cin >> m;
  map<pair<int, int>, int> mem;

  while(m--)
  {
    int l, r;
    cin >> l >> r;


    if (mem[{l, r}])
    {
      cout << mem[{l, r}] << "\n";
      continue;
    }

    int counter{0};
    for (int i{l-1}; i < (r - 1); i++)
    {
      if (s[i] == s[i + 1])
        counter++;

//       cout << "(" << l << ", " << i + 2 << ")" << "\n";

      mem[{l, i + 2}] = counter;
    }

    cout << counter << "\n";
  }

  return 0;
}