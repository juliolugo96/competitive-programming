# include <bits/stdc++.h>

using namespace std;

using ull = long long;
# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
  io_boost
  short q;

  cin >> q;

  while(q--)
  {
    ull n;
    cin >> n;

    ull result{1}, pow_curr{3};

    while(result  < n)
    {
      result  += pow_curr;
      pow_curr *= 3;
    }

    while(pow_curr)
    {
      if (result - pow_curr >= n) result  -= pow_curr;
      pow_curr/=3;
    }

    cout << result << "\n";
  }

  return 0;
}