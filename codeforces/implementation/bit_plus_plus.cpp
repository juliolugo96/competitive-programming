# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
  io_boost
  short n;
  cin >> n;
  int x{0};
  while (n--)
  {
    string s;
    cin >> s;
    
    s == "++X" || s == "X++" ? x++ : x--;
  }

  cout << x << "\n";

  return 0;

}