#include <bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

int k[300001]{0};
ull c[300001]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  short t;
  cin >> t;
  while (t--)
  {

    int n, m;

    cin >> n >> m;

    for (int i{0}; i < n; i++)
      cin >> k[i];

    for (int i{0}; i < m; i++)
      cin >> c[i];

    sort(begin(k), begin(k) + n);
    reverse(begin(k), begin(k) + n);

    ull min_cost{0};

    for (int i{1}; i <= n; i++)
      min_cost += i > k[i - 1] ? c[k[i - 1] - 1] : c[i - 1];

    cout << min_cost << "\n";
  }

  return 0;
}