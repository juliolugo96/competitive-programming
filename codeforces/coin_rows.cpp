#include <bits/stdc++.h>

using namespace std;

int matrix[2][100001], mem[2][100001];

int m;

int maximize(int &count, pair<int, int> pos)
{
  if (pos.first == m - 1 and pos.second == 1)
    return count;

  if (pos.first >= m or pos.second >= 2)
    return 0;

  if (mem[pos.first][pos.second] == 1)
    return 0;

  mem[pos.first][pos.second] = 1;
  auto current_count = count;
  count += max(maximize(current_count, {pos.first + 1, pos.second}), maximize(current_count, {pos.first, pos.second + 1}));

  return count;
}

int minimize(int &count, pair<int, int> pos)
{
  if (pos.first == m - 1 and pos.second == 1)
    return count;

  if (pos.first >= m or pos.second >= 2)
    return 0;

  if (mem[pos.first][pos.second] == 1)
    return 0;

  mem[pos.first][pos.second] = 1;
  auto current_count = count;
  count += min(minimize(current_count, {pos.first + 1, pos.second}), minimize(current_count, {pos.first, pos.second + 1}));

  return count;
}

void get_max_count(int &count)
{
  minimize(count, {0, 0});
  count += maximize(count, {0, 0});
}

int main()
{
  int t;

  cin >> t;

  while (t--)
  {

    cin >> m;

    for (int i{0}; i < 2; ++i)
      for (int j{0}; j < m; ++j)
      {
        cin >> matrix[i][j];
        mem[i][j] = 0;
      }

    // int count{0};
    // get_max_count(count);
    // cout << count << "\n";
  }

  return 0;
}