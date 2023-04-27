#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int a, b;

    cin >> a >> b;

    if (a == b)
    {
      cout << 0 << "\n";
      continue;
    }

    int diff = abs(b - a);

    if (diff <= 10)
    {
      cout << 1 << "\n";
      continue;
    }

    int last_val = diff % 10;
    diff /= 10;

    cout << diff + (last_val != 0) << "\n";
  }

  return 0;
}