# include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;

  cin >> s;
  int count{0};

  for (auto c: s)
  {
    if (c == '4') count++;
    if (c == '7') count++;
  }

  auto res = to_string(count);

  for (int i{0}; i < res.size(); i++)
    if (res[i] != '4' and res[i] != '7')
    {
      cout << "NO\n";
      return 0;
    }

  cout << "YES\n";
  return 0;
}