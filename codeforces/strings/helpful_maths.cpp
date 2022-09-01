# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;

  cin >> s;
  size_t n = s.size();
  int a[4]{0};


  for (int i{0}; i < n; ++i)
    a[s[i] - '0']++; 

  int counter{0};
  for (int i{1}; i < 4; ++i)
    for (int j{0}; j < a[i]; ++j)
      {
        counter++;
        cout << i << (counter <= n/2 ? "+" : "");
      }
    
  cout << "\n";
  return 0;
}