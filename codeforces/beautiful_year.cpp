# include <bits/stdc++.h>

using namespace std;

bool has_repeated_chars(const string &s)
{
  map<char, bool> mem;

  for (auto c: s)
  {
    if (mem[c])
      return true;

    mem[c] = true;
  }

  return false;
}


int main()
{
  string s;
  cin >> s;

  for (int i{stoi(s) + 1}; i < 10000; i++)
  {
    if (not has_repeated_chars(to_string(i)))
    {
      cout << i << "\n";
      break;
    }
  }

  return 0;
}