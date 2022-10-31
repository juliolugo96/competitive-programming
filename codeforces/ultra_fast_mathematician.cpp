# include <bits/stdc++.h>

using namespace std;

bitset<32> to_bitset(string s)
{
    auto binary = [](char c) { return c == '0' || c == '1'; };
    auto not_binary = [binary](char c) { return !binary(c); };

    s.erase(std::remove_if(begin(s), end(s), not_binary), end(s));

    return std::bitset<32>(s);
}

string to_string_ov(bitset<32> bs)
{
    return bs.to_string();
}

int main()
{
  string s1, s2;

  cin >> s1 >> s2;

  cout << to_string_ov(to_bitset(s1) ^ to_bitset(s2)) << "\n";


  return 0;
}