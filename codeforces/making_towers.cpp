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
    int c[n]{0}, colors[n]{-1}, ans[n]{0};

    for (int i{0}; i < n; ++i)
      cin >> c[i];

    for (int i{0}; i < n; ++i)
    {
      if (colors[ c[i] -1 ] == -1)
      {
        colors[ c[i] -1 ] = i % 2;
        ans[c[i] -1 ]++;
      }

      if (colors[ c[i] - 1] != (i % 2))
      {
        ans[c[i] -1 ]++;
        colors[ c[i] -1 ] = i % 2;
      }

    }

    for (int i{0}; i < n; i++)
      cout << ans[i] << " ";

    cout << "\n";
  }


  return 0;
}