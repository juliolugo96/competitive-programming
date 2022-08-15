# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);

  cin.tie(nullptr);

  short w;
  cin >> w;

  cout << (w & 1 or w == 2 ? "NO\n" : "YES\n");

  return 0;
}