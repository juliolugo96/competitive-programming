#include <bits/stdc++.h>

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
    int n, d;

    cin >> n >> d;

    string s;

    cin >> s;

    if (d == 0)
    {
      s.push_back('0');
      cout << s << "\n";
      continue;
    }

    string ret;

    bool flag = false;
    for (int i{0}; i < n; i++)
    {
      int c = s[i] - '0';

      if (c < d and not flag)
      {
        cout << d;
        flag = true;
      }
      cout << s[i];
    }

    if (not flag)
      cout << d;

    cout << "\n";
  }

  return 0;
}