# include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, t;

  cin >> s >> t;

  reverse(s.begin(), s.end());

  cout << (s == t ? "YES\n" : "NO\n");

  return 0;

}