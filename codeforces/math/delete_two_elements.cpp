#include <bits/stdc++.h>

using namespace std;

using ll = long long;

static ll a[static_cast<int>(2e5 + 1)];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    ll count{0}, sum{0}, req{0};

    map<ll, ll> mem;

    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];
      sum += a[i];
    }

    req = (2 * sum) / n;

    if ((n - 2) * sum != (sum - req) * n)
    {
      cout << 0 << "\n";
      continue;
    }

    for (int i{0}; i < n; ++i)
    {
      count += mem[req - a[i]];
      mem[a[i]]++;
    }

    cout << count << "\n";
  }

  return 0;
}