#include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    string s;

    cin >> s;

    size_t n = s.size();

    int res{0}, sol{0};

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '?')
        (i & 1) ? res-- : res++;
      else if (i & 1)
        s[i] == '1' ? res-- : res;
      else
        s[i] == '1' ? res++ : res;

      int remainder = ((n - (i + 1)) & 1) ? n - i : n - (i + 1);

      // cout << "Current kick: " << i + 1 << "\n";
      // cout << "Current result: " << res << "\n";
      // cout << "Remainder kicks: " << remainder / 2 << "\n\n\n";

      if (remainder / 2 < abs(res) ||
          (not(i & 1) and s[i] == '0' and remainder / 2 <= abs(res)))
      {
        sol = i + 1;
        break;
      }
    }

    cout << (sol == 0 ? 10 : sol) << "\n";
  }

  return 0;
}