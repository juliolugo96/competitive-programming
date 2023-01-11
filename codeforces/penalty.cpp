#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  short t;

  cin >> t;

  while (t--)
  {
    string s;

    cin >> s;

    size_t n = s.size();

    int pos{0}, pos_q{0}, neg{0}, neg_q{0}, sol{0};

    for (int i = 0; i < n; i++)
    {
      if (not(i & 1) and s[i] == '1')
        pos++;
      else if (not(i & 1) and s[i] == '?')
        pos_q++;
      else if (i & 1 and s[i] == '1')
        neg++;
      else if (i & 1 and s[i] == '?')
        neg_q++;

      if ((pos_q + pos > (n - i) / 2 + neg) or
          (neg_q + neg > (n - (i + 1)) / 2 + pos) or
          (i == n - 1))
      {
        cout << i + 1 << "\n";
        break;
      }
    }
  }

  return 0;
}