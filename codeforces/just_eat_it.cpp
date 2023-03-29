#include <bits/stdc++.h>

using namespace std;

static int a[static_cast<int>(1e6)]{0};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    long long yasser{0};
    bool flag = false;
    for (int i{0}; i < n; i++)
    {
      cin >> a[i];
      yasser += a[i];

      if (a[i] < 0)
        flag = true;

      if (i > 0)
        a[i] += a[i - 1];
    }

    if (flag)
    {
      cout << "YES\n";
      continue;
    }

    for (int i{0}; i < n; ++i)
      if (a[i] > yasser and i != n - 1)
      {
        cout << "NO\n";
        break;
      }
  }

  return 0;
}