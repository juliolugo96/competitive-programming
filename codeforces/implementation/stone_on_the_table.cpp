# include <bits/stdc++.h>


using namespace std;

int main()
{
  short n;

  cin >> n;

  string s;
  cin >> s;

  int count{0};

  for (int i{0}; i < n; i++)
    if (i > 0 and s[i - 1]  == s[i]) count++;
  

  cout << count << "\n";

  return 0;
}