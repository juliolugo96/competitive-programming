# include <bits/stdc++.h>

using namespace std;

int main()
{
  short n, m;

  int a[100];

  cin >> n;

  for (int i{0}; i < n; ++i)
    cin >> a[i];

  cin >> m;
  int b[100];

  for (int i{0}; i < m; ++i)
    cin >> b[i];

  sort(begin(a), begin(a) + n);
  sort(begin(b), begin(b) + m);

  int count{0};

  for (int i{0}; i < n; i++)


  
  cout << count << "\n";

  return 0;
}