# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

using ull = unsigned long long;

int main()
{
  io_boost
  short q;

  cin >> q;

  while(q--)
  {
    ull l, r, d;
    cin >> l >> r >> d;
    cout << (d < l ? d : d*(ull)ceil((double)((double)(r + 1 )/(double)d)) ) << "\n";
  }

  return 0;
}