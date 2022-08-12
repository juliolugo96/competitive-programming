# include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;


int main()
{
  ull n, m, a;
  cin >> n >> m >> a;

  cout << (ull)ceil(ceil((double)n/a) * ceil((double)m/a)) << "\n";

  return 0;
}