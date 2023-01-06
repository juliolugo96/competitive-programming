#include <bits/stdc++.h>

using namespace std;

static int a[100001]{0}, t[100001]{0}, sums[100001]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;

  cin >> n >> k;

  int total{0};

  for (int i{0}; i < n; i++)
    cin >> a[i];

  for (int i{0}; i < n; i++)
    cin >> t[i];

  for (int i{0}; i < n; i++)
  {
    if (i)
      sums[i] += sums[i - 1];

    t[i] ? total += a[i] : sums[i] += a[i];
  }

  int max_num{sums[k - 1]};

  for (int i{k}, j{0}; i < n; i++, j++)
    max_num = max(max_num, sums[i] - sums[j]);

  cout << max_num + total << "\n";

  return 0;
}