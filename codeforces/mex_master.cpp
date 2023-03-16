#include <bits/stdc++.h>

using namespace std;

static int a[200001]{0};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int count_zero{0}, count_one{0};

    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];

      if (a[i] == 0)
        count_zero++;
      else if (a[i] == 1)
        count_one++;
    }

    if (count_zero <= (n + 1) / 2)
    {
      cout << 0 << "\n";
      continue;
    }

    if (count_one == 0 or count_one + count_zero < n)
    {
      cout << 1 << "\n";
      continue;
    }
    cout << 2 << "\n";
  }

  return 0;
}