# include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main()
{
  int m, n;

  cin >> n >> m;

  vector<ull> v;

  for (int i{0}; i < n; ++i)
  {
    ull data;
    cin >> data;
    v.push_back( i == 0 ? data : data + v[i - 1]);
  }

  for (int i{0}; i < m; ++i)
  {
    ull b;
    cin >> b;
    auto lower = lower_bound(v.begin(), v.end(), b);
    auto pos = lower - v.begin();
    cout << ( pos + 1) << " " << (pos == 0 ? b : b - v[pos - 1]) << "\n"; 
  }

  
  return 0;
}
