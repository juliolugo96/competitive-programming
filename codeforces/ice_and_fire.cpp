#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    string s;

    cin >> s;

    int wins[n - 1]{0};

    for (int i{2}; i <= n; i++)
    {
      int count{0};
      if (i > 2)
        if (s[i - 2] != s[i - 3])
          count = i - 1;
        else
          count = wins[i - 2] ? wins[i - 2] : 1;
      else
        count = 1;

      wins[i - 2] = count;

      cout << count << " ";
    }
    cout << "\n";
  }

  return 0;
}