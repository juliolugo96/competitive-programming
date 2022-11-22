# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int bal{0};

    for (int i{0}; i < n; i++)
      bal += s[i] == 'Q' ? 1 : bal > 0 ? -1 : 0;
    
    cout << (bal <= 0 ? "Yes\n" : "No\n");
  }

  return 0;
}