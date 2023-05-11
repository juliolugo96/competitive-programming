#include <bits/stdc++.h>

using namespace std;

static int a[51]{0};

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    for (int i{0}; i < n; ++i)
      cin >> a[i];

    sort(begin(a), begin(a) + n);
    int flag = 0;
    for (int i{1}; i < n; ++i)
      if (abs(a[i] - a[i - 1]) <= 1)
        flag++;

    cout << (flag == n - 1 ? "YES\n" : "NO\n");
  }

  return 0;
}