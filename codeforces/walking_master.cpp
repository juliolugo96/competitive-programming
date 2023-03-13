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

    if (d < b or ((d - b) + a) < c)
    {
      cout << -1 << "\n";
      continue;
    }

    if (a == c and b == d)
    {
      cout << 0 << "\n";
      continue;
    }

    if (b == d)
    {
      cout << abs(a - c) << "\n";
      continue;
    }

    cout << abs(a - (c - (d - b))) + (d - b) << "\n";
  }

  return 0;
}