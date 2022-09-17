# include <bits/stdc++.h>

using namespace std;

static int a[100]{999}, b[100]{999};
static int edmons[100][100];

int main()
{
  short n, m;

  int a[100];
  cin >> n;

  for (int i{0}; i < n; ++i)
    cin >> a[i];

  cin >> m;
  int b[100];

  for (int i{0}; i < m; ++i)
    cin >> b[i];

  for (int i{0}; i < n; i++)
    for (int j{0}; j < m; j++)
      edmons[i][j] = abs(a[i] - b[j]) <= 1 ? 1 : 0;

  
  cout << count << "\n";

  return 0;
}