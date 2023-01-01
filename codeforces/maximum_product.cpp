#include <bits/stdc++.h>

using namespace std;

static long long a[static_cast<int>(1e5 + 1)]{0};

int main()
{
  ios_base::sync_with_stdio(false);

  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;

  while (t--)
  {
    int n, count_pos{0};

    cin >> n;

    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] > 0)
        count_pos++;
    }

    sort(begin(a), begin(a) + n);

    long long total = static_cast<long long>(-1e18);

    if (not count_pos or n == 5)
    {
      total = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
      cout << total << "\n";
      continue;
    }

    for (int i{0}; i < 5; i++)
    {
      long long ans = 1;

      for (int j{1}; j <= 5; j++)
        ans *= a[(n - j + i) % n];

      total = max(ans, total);
    }

    cout << total << "\n";
  }

  return 0;
}