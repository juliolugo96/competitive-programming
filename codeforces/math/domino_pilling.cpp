# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  short m, n;

  cin >> m >> n;

  cout << (m & 1 ? ((m-1)*n)/2 + (n & 1 ? (n + 1) / 2 - 1 : n / 2) : (m * n)/2) << "\n";
  return 0;
}