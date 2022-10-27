# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short n;
    cin >> n;

    int a[n]{0};

    for (int i{0}; i < n; ++i)
      cin >> a[i];

    int sum{0};

    for (int i{0}; i < n; ++i)
      sum += (not a[i] ? 2 : 1) * (i + 1) * (n - i);

    cout << sum << "\n";
  }

  return 0;
}