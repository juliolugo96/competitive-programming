# include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int m, n;

  cin >> n >> m;

  ull v[n];

  for (int i{0}; i < n; ++i)
  {
    cin >> v[i];
    
    v[i] += i == 0 ? 0 : v[i - 1];
  }

  for (int i{0}; i < m; ++i)
  {
    ull b;
    cin >> b;

    int low{0}, high{n-1};

    while(low < high)
    {
      int mid = low + (high - low)/2;

      if (b <= v[mid])
        high = mid;
      else 
        low = mid + 1;
    }

    cout << ( low + 1) << " " << (low == 0 ? b : b - v[low - 1]) << "\n"; 
  }

  return 0;
}
