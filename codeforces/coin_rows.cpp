#include <bits/stdc++.h>

using namespace std;

int matrix[2][100001];

int get_max_count(int count)
{

  return count;
}

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

    int count{0};

    cout << get_max_count(count) << "\n";
  }

  return 0;
}