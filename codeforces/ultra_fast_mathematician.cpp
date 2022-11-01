# include <bits/stdc++.h>

using namespace std;

bitset<100> to_bitset(string s)
{
    return std::bitset<100>(s);
}

string to_string_ov(bitset<100> bs)
{
    return bs.to_string();
}

int main()
{
  string s1, s2;

  cin >> s1 >> s2;

  string res = to_string_ov(to_bitset(s1) ^ to_bitset(s2));
  cout << res.substr(res.size() - s1.size()) << "\n";

  return 0;
}