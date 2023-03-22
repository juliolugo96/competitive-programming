#include <bits/stdc++.h>

using namespace std;

static int a[101]{0};

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;
    bool flag = false;
    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];

      if (a[i] >= i + 1 and a[i] < n)
        flag = true;
    }

    cout << (flag ? "YES\n" : "NO\n");
  }

  return 0;
}