# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    vector<unsigned long long> a;
    unsigned long long sum{0};
    for (int i{0}; i < n; ++i)
      {
        unsigned long long k;
        cin >> k;
        sum += k;
        a.push_back(k);
      }

    sort(a.rbegin(), a.rend());
    unsigned long long sum_red{0};
    bool flag = false;
    for (int i{0}; i < n; ++i)
      {
        sum_red += a[i];
        auto res = sum - sum_red;

        if (sum_red > res)
          {
            if (i + 1 < (n & 1 ? (n+1)/2 : n/2) ) 
            {
              flag = true;
              break;
            }
            

            for (int j{i}; j >= 0; --j)
            {
              sum_red -= a[j];
              if (sum_red <= res) 
              {
                flag = false;
                break;
              }

              if ((n - i - 1) > j)
              {
                flag = true;
                break;
              }
            }

            break;
            
            
          }

        
      }

      cout << (flag ? "YES\n" : "NO\n");
  }

  return 0;
}