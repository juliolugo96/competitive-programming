#include <bits/stdc++.h>

using namespace std;

static long long a[static_cast<long long>(1e5) + 9]{0};

static long long b[static_cast<long long>(1e5) + 9]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, q, k;

  cin >> n >> q >> k;

  for (long long i{0}; i < n; i++)
    cin >> a[i];

  b[0] = (a[1] - 1) - 1;

  for (long long i{1}; i < (n - 1); i++)
  {
    b[i] = a[i + 1] - (a[i - 1] + 1) - 1;
    b[i] += b[i - 1];
  }

  b[n - 1] = (k - (a[n - 2] + 1) - 1) + b[n - 2];

  while (q--)
  {
    long long l, r;

    cin >> l >> r;

    long long total{0};

    if (l == r)
    {
      cout << k - 1 << "\n";
      continue;
    }

    cout << (b[r - 2] - b[l - 1]) + (k - a[r - 2] - 1) + ((a[l] - 1) - 1) << "\n";
  }

  return 0;
}