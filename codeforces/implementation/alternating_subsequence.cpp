# include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;

    cin >> n;

    long long a[n]{0};
    cin >> a[0];
    long long sum{0};
    int state = a[0] >= 0 ? 1 : -1;
    long long pos{a[0] >= 0 ? a[0] : 0};
    long long neg{a[0] < 0 ? abs(a[0]) : static_cast<long long>(1e9 + 1)};

    for (int i{1}; i < n; ++i)
    {  
      cin >> a[i];

      // cout << "a[" << i << "]: " << a[i] << "\n";
      // cout << "state: " << state << "\n";
      // cout << "Pos: " << pos << "\n";
      // cout << "Neg: " << neg << "\n";
      // cout << "Sum: " << sum << "\n\n\n";

      if (state == 1 and a[i] < 0)
      {
        sum += pos;
        pos = 0;
        state = -1;
        neg = min(neg, abs(a[i]));
      } else if (state == -1 and a[i] >= 0)
      {
        sum -= neg;
        neg = static_cast<long long>(1e9 + 1);
        state = 1;
        pos = max(pos, a[i]);
      }

      a[i] >= 0 ? pos = max(a[i], pos) : neg = min(abs(a[i]),neg );
  }
    cout << sum + ( state == 1 ? pos : -neg ) << "\n";
    
    
  }


  return 0;
}