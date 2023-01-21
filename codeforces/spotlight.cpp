#include <bits/stdc++.h>

using namespace std;

static int stage[1001][1001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m;

  cin >> n >> m;

  int count_zeros{0}, column_count_zeros[1001]{0}, total{0};
  bool found_one = false, column_found_one[1001]{false};

  for (int i{1}; i <= n; i++)
  {
    for (int j{1}; j <= m; j++)
    {
      cin >> stage[i][j];

      // cout << "Count zero: " << count_zeros << "\n";
      // cout << "Column count: " << column_count_zeros[j] << "\n";
      // cout << "Total: " << total << "\n\n\n";

      if (stage[i][j] == 1)
      {
        if (found_one)
          count_zeros *= 2;

        if (column_found_one[j])
          column_count_zeros[j] *= 2;

        found_one = true;
        column_found_one[j] = true;

        total += count_zeros + column_count_zeros[j];
        column_count_zeros[j] = 0;
        count_zeros = 0;
        continue;
      }
      else if (i == n and column_found_one[j])
      {
        total += column_count_zeros[j] + 1;
        column_count_zeros[j] = 0;
        column_found_one[j] = false;
      }
      else
        column_count_zeros[j]++;

      count_zeros++;
    }

    if (count_zeros and found_one)
      total += count_zeros;

    found_one = false;
    count_zeros = 0;
  }

  cout << total << "\n";

  return 0;
}