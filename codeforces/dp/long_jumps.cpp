# include <bits/stdc++.h>

using namespace std;

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

    int a[200001]{0};

    for (int i{0}; i < n; i++)
        cin >> a[i];

    int mem[200001]{0};
    
    int min_val{0};

    for (int i{n}; i > 0; i--)
    {
      int res{0};
      int next_i{i};
      // cout << "i value: " << i << "\n";
      while(next_i <= n)
      {
        if (mem[next_i])
        {
          res += mem[next_i];
          break;
        }

        res += a[next_i - 1];
        next_i += a[next_i - 1];

        // cout << "Res: " << res << "\n";
        // cout << next_i << "\n\n";
      }
      mem[i] = res;

      min_val = res > min_val ? res : min_val;
    }

    cout << min_val << "\n";
  }

  return 0;
}