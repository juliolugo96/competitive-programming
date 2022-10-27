# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;
  vector<string> magnets;
  for (int i{0}; i < n; ++i)
  {
    string s;

    cin >> s;
    magnets.push_back(s);
  }
  int count{1};
  auto m_size = magnets.size();
  for (int i{1}; i < m_size; ++i)
    if (magnets[i] != magnets[i - 1]) count++;
  

  cout << count << "\n";

  return 0;
}