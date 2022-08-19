# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

using ull = unsigned long long;

static ull a[static_cast<int>(2e5) + 1]{0};

int main()
{
  int n;
  cin >> n;
  
  ull acc{0}, cap{0};

  for (int i{0}; i < n; ++i)
    cin >> a[i];
    
  for (int i{n - 1}; i >=0; i--)
  {
    if (i < n -1 and a[i] >= a[i + 1])
      a[i] = a[i + 1] ? a[i + 1] - 1 : 0;
    
    acc += a[i];
  }

  cout << acc << "\n";
  
  return 0;
}