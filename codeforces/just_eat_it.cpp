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

    bool flag = false;
    for (int i{0}; i < n; i++)
      cin >> a[i];

    long long l{0}, r{0};
    for (int i{0}, j{n - 1}; i < n; i++, j--)
    {
      l += a[i];
      r += a[j];

      if (l <= 0 or r <= 0)
      {
        flag = true;
        break;
      }
    }

    cout << (flag ? "NO\n" : "YES\n");
  }

  return 0;
}