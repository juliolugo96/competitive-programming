# include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;
  long a[1000000001]{0};
  long count{0};
  
  a[1] = 2;
  for (long i{2}; i < 1000000001; )
    {
      a[i] = a[i - 1] + 3*(i - 1) + 2;

      if (a[i] > 1000000001){
        count = i;
        break;
      }
    }

  while(t--)
  {
    long n;
    cin >> n;

    if (n < 2)
      {
        cout << "0\n";
        continue;
      }
    long counter{0};
    while(n >= 2)
    {
      auto pos = lower_bound(begin(a), begin(a) + count, n);
      counter += pos - begin(a);
      n -= *pos;
    }
    
    cout << counter << "\n";
  }
  
  return 0;
}