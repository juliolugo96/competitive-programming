#include <bits/stdc++.h>

using namespace std;

static bool polygon[52][52];

int n;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    cin >> n;

    bool flag{true};

    for (int i{0}; i < n; i++)
      for (int j{0}; j < n; j++)
      {
        char c;
        cin >> c;
        polygon[i][j] = c - '0';
      }

    for (int i{0}; i < n - 1; ++i)
      for (int j{0}; j < n - 1; ++j)
        if (polygon[i][j] and not polygon[i + 1][j] and not polygon[i][j + 1])
        {
          flag = false;
          break;
        }

    cout << (flag ? "YES\n" : "NO\n");
  }

  return 0;
}