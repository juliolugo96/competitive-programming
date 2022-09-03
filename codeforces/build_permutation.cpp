# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
  short t;
  cin >> t;
  vector<int> v;

  for (int i{0}; i < 100; ++i)
    v.push_back((i) * (i));

  while(t--)
  {
    int n;
    cin >> n;

    for (int i{0}; i < n; ++i)
    {
      auto a = lower_bound(v.begin(), v.end(), i);
      cout << (v[*a] - i) << " ";
    }
    
    cout << "\n";

  }

  return 0;
}