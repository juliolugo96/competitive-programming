#include <bits/stdc++.h>

using namespace std;

static int a[101]{0}, cuts[101]{0};

int main()
{
  short n, b, count{0}, ans{0}, j{0};

  cin >> n >> b;

  for (int i{0}; i < n; i++)
  {
    cin >> a[i];

    count += a[i] & 1 ? -1 : 1;

    if (count == 0 and i != n - 1)
      cuts[j++] = abs(a[i] - a[i - 1]);
  }

  sort(begin(cuts), begin(cuts) + j);

  for (int i{0}; i < j; i++)
  {
    if (ans + cuts[i] < b)
      ans += cuts[i];
    else
      break;
  }

  cout << ans << "\n";

  return 0;
}