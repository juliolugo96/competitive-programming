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
    string s;
    cin >> s;
    size_t n = s.size();
    
    int counter{1}, max_val = 200000;
    char step = s[0];
    bool flag{false};

    for (int i{1}; i < n; i++)
    {
      if (s[i] == s[i - 1] and s[i] == step) continue;

      if (s[i] == s[i - 1] and s[i] != step)
      {
        counter++;
        continue;
      }

      if (s[i] != s[i - 1] and s[i] == step)
      {
        step = s[i - 1];
        counter = 2;
        continue;
      }

      counter++;

      if (counter >= 3)
      {
        flag = true;
        max_val = min(counter, max_val);
        counter = 2;
        step = s[i - 1];
      }
      
    }

    cout << (max_val >= 3 and flag ? max_val : 0) << "\n";
  }

  return 0;
}