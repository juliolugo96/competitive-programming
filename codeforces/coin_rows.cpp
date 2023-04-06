#include <bits/stdc++.h>

using namespace std;

int matrix[2][100001];

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

  }

  return 0;
}