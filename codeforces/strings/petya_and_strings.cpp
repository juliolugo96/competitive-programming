# include <bits/stdc++.h>

using namespace std;

int main()
{
  string s1, s2;

  cin >> s1 >> s2;

  transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return tolower(c); });

  transform(s2.begin(), s2.end(), s2.begin(),
  [](unsigned char c){ return tolower(c); });

  vector<string> v;

  v.push_back(s1);
  v.push_back(s2);

  sort(v.begin(), v.end());

  if (v[0] == v[1])
    {
      cout << 0 << "\n";
    } else if (v[0] == s1)
    {
      cout << -1 << "\n";
    } else
    {
      cout << 1 << "\n";
    }


  return 0;
}