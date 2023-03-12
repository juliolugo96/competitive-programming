#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (d < b or (c > a and (b + abs(c - a)) < d))
    {
      cout << -1 << "\n";
      continue;
    }

    if (a == c and b == d)
    {
      cout << "0\n";
      continue;
    }

    cout << ((abs(a - b)) + (b == d ? 0 : abs(d - b))) << "\n";
  }

  return 0;
}