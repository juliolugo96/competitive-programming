#include <bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

int k[300001]{0};
ull c[300001]{0};

int main()
{
  short t;
  cin >> t;
  while (t--)
  {

    int n, m;

    cin >> n >> m;

    for (int i{0}; i < n; i++)
      cin >> k[i];

    for (int i{0}; i < m; i++)
    {
      cin >> c[i];
    }

    ull min_cost{0};

    for (int i{0}; i < n; i++)
    {
      min_cost += c[k[i]];
    }

    cout << min_cost << "\n";
  }

  return 0;
}