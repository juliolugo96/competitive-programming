# include <bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  short t;
  cin >> t;

  while (t--)
  {
    int n;
    ull s;
    cin >> n >> s;

    ull a[n];
    
    ull sum{0};
    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];
      sum += a[i];
    }
    
    if (sum <= s)
    {
      cout << "0\n";
      continue;
    }
      
    ull temp_sum{0}, max_elem{0};
    int removed{0};
    bool flag = false;

    for (int i={0}; i < n; ++i)
    {
      temp_sum += a[i];

      if (not flag)
      {
        removed = a[i] > max_elem ? i + 1 : removed;
        max_elem = a[i] > max_elem ? a[i] : max_elem;
      }

      if (temp_sum > s)
      {
        if (flag)
          break;

        flag = true;
        temp_sum -= max_elem;
      }
    }

    cout << removed << "\n";

  }

  
  return 0;
}