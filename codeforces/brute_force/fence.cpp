# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, k;
  cin >> n >> k;

  int sums[n - k]{0};
  int h[n]{0};
  int sum{1000000}; int res{1};

  for (int i{0}; i < n; i++)
  {

    cin >> h[i];
    
    if (i < k)
    {
      sums[0] += h[i];
      continue;
    } else
    {
      if (i == k) sum = sums[0];
      
      sums[i - (k - 1) ] = sums[i - k] - h[i - k] + h[i];

      if (sums[i - (k - 1) ] < sum) 
      {
        sum = sums[i - (k - 1) ];
        res = i - (k - 1) + 1;
      }
    }
  }

  cout << res << "\n";
  return 0;
}