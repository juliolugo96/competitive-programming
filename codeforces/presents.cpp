# include <bits/stdc++.h>

using namespace std;

int main()
{
  short n;

  cin >> n;
  int p[n]{0};

  for (int i{0}; i < n; i++)
  {
    int f;
    cin >> f;
    p[f - 1] = i + 1;
  }

  for (int i{0}; i < n; i++)
    cout << p[i] << " ";

  cout <<"\n";

  return 0;
}