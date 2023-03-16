#include <bits/stdc++.h>

using namespace std;

static int a[100001]{0}, b[100001]{0};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int count_zero{0};

    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];

      if (a[i] == 0)
        count_zero++;
    }

    if (count_zero == n)
    {
      cout << 1 << "\n";
      continue;
    }
    else if (count_zero == 0 or n & 1 and not(count_zero & 1))
    {
      cout << 0 << "\n";
      continue;
    }
    else
    {
      cout << 1 << "\n";
      continue;
    }
  }

  return 0;
}