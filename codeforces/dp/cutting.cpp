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

    if (count == 0 and i > 0 and i < n - 1)
      cuts[j++] = abs(a[i - 1] - a[i]);

    count += a[i] & 1 ? -1 : 1;
  }

  if (count != 0)
  {
    cout << 0 << "\n";
    return 0;
  }

  sort(begin(cuts), begin(cuts) + j);

  // for (int i{0}; i < j; i++)
  //   cout << cuts[i] << " ";

  // cout << "\n";
  int i{0};
  for (i = 0; i < j; i++)
  {
    if (ans + cuts[i] > b)
      break;

    ans += cuts[i];
  }

  cout << i << "\n";

  return 0;
}