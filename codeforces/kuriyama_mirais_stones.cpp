# include <bits/stdc++.h>

using namespace std;

static long long v[100001]{0}, u[100001]{0};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;

  cin >> n;


  for (int i{0}; i < n; i++)
  {
    cin >> v[i];
    u[i] = v[i];
  }
    
  int m;

  cin >> m;

  sort(begin(u), begin(u) + n);

  for (int i{1}; i < n; i++)
  {
    v[i] += v[i - 1];
    u[i] += u[i - 1];
  }


  while (m--)
  {
    int type, l, r;

    cin >> type >> l >> r;
 
    cout << (type == 1 ? v[r-1] - v[l-2] : u[r-1] - u[l-2]) << "\n";
  }

  return 0;
}