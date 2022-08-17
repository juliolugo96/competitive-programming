# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  short t;

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int q[n], p[n], pos{0};
    bool res[n]{false}, flag = false, special_case = false;

    for (int i{0}; i < n; ++i)
    {
      cin >> q[i];
      res[q[i] - 1] = true;

      if (i > 0 and p[i - 1] == p[i])
      {
        if (p[i] == 1) special_case = true;
        
        flag = true;
        pos = i;
      }

      if (not flag)
        p[i] = q[i];
    }


    if (special_case)
    {
      cout << "-1\n";
      continue;
    }
      
    int j{1};
    while(j <= n)
    {
      if (not res[j-1])
      {
        p[pos] = j;
        res[j - 1] = true;
        pos++;
      }

      j++;
    }
    flag = false;
    for (int i{0}; i < n; ++i)
    {
      if (not res[i])
      {
        flag= true;
        break;
      }
    }

    if (not flag)
    {
      for (int i{0}; i < n; i++)
        cout << p[i] << " ";

      cout << "\n";
    } else
        cout << "-1\n";
  }

  return 0;
}