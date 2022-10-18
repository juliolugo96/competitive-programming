# include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007


int fast_pow(int base, int power)
{
  int res{1};

  while(power > 0)
  {
    if (power & 1) res = (res * base)%MOD;

    base = (base * base) % MOD;
    power >>= 1;
  }

  return res;
}


int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short n;
    cin >> n;

    int a[n];

    for (int i{0}; i < n; ++i)
      cin >> a[i];

    uint pow_set_size = fast_pow(2, n);
    int sum{0};
    for (int i{0}; i < pow_set_size; i++)
    {
      int subset[n]{0}, k{0};
      for (int j{0}; j< n; j++)
      {
        if (i & (1 << j))
          {
            subset[k] = a[j];
            k++;
          }
      }

      sum += max_partition(subset)
    }



  }

  return 0;
}