# include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;


  getline(std::cin, s);
  set<char> res;
  unordered_set<char> ignore({'{', '}', ',', ' '});

  for (auto &c : s)
  {
    if (ignore.find(c) != ignore.end())
      continue;
    
    
    res.insert(c);
  }

  cout << res.size() << "\n";


  return 0;
}