# include <bits/stdc++.h>
 
using namespace std;
 
# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
 
static pair<int, int> map_a[static_cast<int>(1e5)+1]{{0,0}};
 
int main()
{
  io_boost
  int n;
  cin >> n;
  int a[n]{0}, sol[n]{0};
 
  int col{0};
 
  for (int i{0}; i < n; ++i)
  {
    cin >> a[i];

    if (map_a[a[i]] != make_pair(0, 0))
    { 
      map_a[a[i]].first++;

      sol[i] = map_a[a[i]].second;
    }
    else
    {
      map_a[a[i]] = { 1, col};
      sol[i] = col;
      col++;
    }

    if (n - map_a[a[i]].first == a[i])
      {
        map_a[a[i]].first = 0;
        map_a[a[i]].second = 0;
      }

  }

  for (int i{0}; i < n; i++)
  {
    if (map_a[a[i]].first != 0)
    {
      cout << "Impossible\n";
      return 0;
    }
  }

  cout << "Possible\n";

  for (int i{0}; i < n; i++)
      cout << sol[i] + 1 << " ";
 
  cout << "\n";
  return 0;
}