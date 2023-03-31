#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    string s;

    cin >> s;
    auto n = s.size();
    int res{0};

    if (n == 1)
      res++;

    if (s[0] == '_' or s[n - 1] == '_')
      res++;

    for (int i{1}; i < n; ++i)
    {
      if (s[i] == '_' and s[i - 1] != '^')
        res++;
    }

    cout << res << "\n";
  }

  return 0;
}