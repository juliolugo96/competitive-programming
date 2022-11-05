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
    int a[n]{0};

    string s;
    cin >> s;
    int max_ans{0}, start{-1};
    bool find_zero{false};
    for (int i{0}; i < n; i++)
    {
      cin >> a[i];

      if (s[i] == '0' and not find_zero)
      {
        find_zero = true;
        start = i;
      }
        
      if (s[i] == '1' and not find_zero)
        max_ans += a[i];
    }

    if (start == -1)
    {
      cout << max_ans << "\n";
      continue;
    }
      
    for (int i{start}; i < n; ++i)
    {
      int min_num = a[i];
      int sum = a[i];

      while(i + 1 < n and s[i + 1] == '1')
      {
        min_num = min(a[i + 1], min_num);
        sum += a[i + 1];
        i++;
      }
      max_ans += sum - min_num;
    }

    cout << max_ans << "\n";
  }

  return 0;
}