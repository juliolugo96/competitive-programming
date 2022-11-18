# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;


  int a[n]{0}, max{-1}, max_pos{-1}, min_pos{-1}, min{101};
  for (int i{0}; i < n; i++)
  {
    cin >> a[i];

    if (a[i] > max)
    {
      max = a[i];
      max_pos = i;
    }

    if (a[i] <= min)
    {
      min = a[i];
      min_pos = i;
    }
  }

  cout << max_pos + (n - 1 - min_pos - (min_pos < max_pos ? 1 : 0)) << " \n";

  return 0;
}