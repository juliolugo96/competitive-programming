# include <bits/stdc++.h>
 
using namespace std;
 
# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
 
map<pair<int, int>, int> map_a;
 
int main()
{
  io_boost
  int n;
  cin >> n;
  int a[n]{0};
 
  int start{1}, acc{0};
 
  for (int i{0}; i < n; ++i)
  {
    cin >> a[i];
    
    map_a[{start, a[i]}]++;
 
    if (map_a[{start, a[i]}] == n - a[i])
      start++;
  }
 
  string s;
 
  for (auto &p: map_a)
  {
    if (n - p.first.second != p.second)
    {
      cout << "Impossible\n";
      return 0;
    }
 
    for (int i{0}; i < p.second; i++)
      s += to_string(p.first.first) + ' ';
  }
 
  cout << "Possible\n";
  cout << s << "\n";
 
  return 0;
}