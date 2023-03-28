#include <bits/stdc++.h>

using namespace std;

int main()
{
  int k, r;

  cin >> k >> r;

  int n{0};

  while (++n)
  {
    if ((n * k) % 10 == r or (n * k) % 10 == 0)
    {
      cout << n << "\n";
      break;
    }
  }

  return 0;
}