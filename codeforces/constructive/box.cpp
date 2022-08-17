# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  short t;

  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;

    bool is_impossible = false, map[n]={false};
    int min{1}, p[n]{0};

    int q[n]{0};
    
    for (int i{0}; i < n; ++i)
    {
      cin >> q[i];
      if (is_impossible) continue;

      if (q[i] < i + 1)
      {
        is_impossible = true;
        continue;
      }
        
      if (map[q[i] - 1])
      {
        map[min - 1] = true;
        p[i] = min;
        while(map[min - 1]) min++;
      } else
      {
         map[q[i]-1] = true;
         p[i] = q[i];
      
        if (q[i] <= min)
          while(map[min - 1]) min++;
      }
    }

    if (is_impossible)
      {
        cout << -1 << "\n";
        continue;
      }

    for (int i{0}; i < n; i++)
      cout << p[i] << " ";

    cout << "\n";
  }

  return 0;
}