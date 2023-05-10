#include <bits/stdc++.h>

using namespace std;

static int matrix[2][static_cast<int>(1e5)], mem[2][static_cast<int>(1e5)];

int main()
{
  int t;

  cin >> t;

  while (t--)
  {

    int m;
    cin >> m;

    for (int i{0}; i < 2; ++i)
      for (int j{0}; j < m; ++j)
        cin >> matrix[i][j];

    int suffix_sum{0}, prefix_sum{0}, ans{static_cast<int>(2e9 + 1)};

    for (int i{0}; i < m; i++)
      suffix_sum += matrix[0][i];

    for (int i{0}; i < m; ++i)
    {
      suffix_sum -= matrix[0][i];
      ans = min(ans, max(suffix_sum, prefix_sum));
      prefix_sum += matrix[1][i];
    }

    cout << ans << "\n";
  }

  return 0;
}