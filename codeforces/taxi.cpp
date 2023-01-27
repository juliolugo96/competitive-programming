#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int total{0}, s_3_1{0}, s2{0};

  for (int i{0}; i < n; ++i)
  {
    int s;
    cin >> s;

    // cout << "Total value:" << total << "\n";

    if (s == 4)
      total++;
    else if (s == 3)
    {
      if (s_3_1 < 0)
        total++;

      s_3_1++;
    }

    else if (s == 2)
    {
      s2++;

      if (s2 == 2)
      {
        s2 = 0;
        total++;
      }
    }
    else
    {
      // cout << "S 3 1 : " << s_3_1 << "\n";
      if (s_3_1 > 0)
        total++;

      s_3_1--;
    }
  }

  if (s_3_1 > 0)
    total += s2 + s_3_1;
  else if (s_3_1 < 0)
  {
    total += abs(s_3_1) / 4;
    int res = abs(s_3_1) % 4;
    if (res > 0 and res < 3)
      total++;
    else if (res == 3)
      total += s2 + 1;
    else
      total += s2;
  }
  else
    total += s2;

  cout << total << "\n";

  return 0;
}