# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;
  int a[n], h[n];

  int colors[101]{0};

  for (int i{0}; i < n; ++i)
  {
    cin >> h[i] >> a[i];

    colors[h[i]]++;
  }
  int count{0};
  for (int i{0}; i < n; ++i)
    if (colors[a[i]]) count += colors[a[i]];

  cout << count << "\n";
    
  


  return 0;
}