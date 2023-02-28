#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;

  cin >> n >> m;
  bool last = true;

  for (int i{0}; i < n; i++)
  {
    for (int j{0}; j < m; j++)
    {
      if (i & 1)
      {
        if ((last and j == m - 1) or (not last and j == 0))
        {
          cout << "#";
        }
        else
          cout << ".";
      }
      else
      {
        if (j < m - 1)
          cout << "#";
        else if (j == m - 1)
          cout << "#";
        else
          cout << ".";
      }

      if (j == m - 1)
        cout << "\n";
    }

    if (i & 1)
      last = !last;
  }

  return 0;
}