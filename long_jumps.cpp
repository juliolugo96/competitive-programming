# include <bits/stdc++.h>

using namespace std;

using ull = long long;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);


  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    ull a[200001]{0};

    for (int i{0}; i < n; i++)
        cin >> a[i];

    map<int, int> mem;
    
    int min_val{-1};

    for (int i{1}; i <= n; i++)
    {
      ull res{0};
      ull next_i{i};

      
      while(next_i < n)
      {
        if (mem[next_i])
        {
          res += mem[next_i];
          break;
        }

        next_i += a[next_i];
        res += a[next_i];
      }

      min_val = res > min_val ? res : min_val;
    }

    cout << min_val << "\n";
  }

  return 0;
}