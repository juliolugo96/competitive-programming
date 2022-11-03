# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int a[n]{0}, ans{0};

    string s;
    cin >> s;

    for (int i{0}; i < n; i++)
      cin >> a[i];

    for (int i{1}; i < n; i++)
      if (s[i] == '1' and s[i - 1] == '0' and a[i - 1] >= a[i])
      {
        s[i] = '0';
        s[i - 1] = '1';
      }

    for (int i{0}; i < n; i++)
      if (s[i] == '1') ans += a[i];

    cout << ans << "\n";

  }
  


  return 0;
}