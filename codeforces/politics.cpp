#include <bits/stdc++.h>

using namespace std;

static int matrix[100][100];

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n, k;

    cin >> n >> k;

    for (int i{0}; i < n; i++)
      for (int j{0}; j < k; j++)
        cin >> matrix[i][j];
  }

  return 0;
}