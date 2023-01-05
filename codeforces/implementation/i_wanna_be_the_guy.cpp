# include <bits/stdc++.h>

using namespace std;

int main()
{

  short n;

  cin >> n;

  bool levels[n]{false};

  int p;
  cin >> p;

  for ( int i{0}; i < p; ++i)
    {
      int a;
      cin >> a;
      levels[a - 1] = true;
    }
  
  int q;
  cin >> q;

  for ( int i{0}; i < q; ++i)
    {
      int a;
      cin >> a;
      levels[a - 1] = true;
    }

  for (int i{0}; i < n; ++i)
    if (not levels[i])
      {
        cout << "Oh, my keyboard!\n";
        return 0;
      }

  cout << "I become the guy.\n";

  return 0;
}