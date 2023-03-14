#include <bits/stdc++.h>

using namespace std;

static int a[100001]{0};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    for (int i{0}; i < n; ++i)
      cin >> a[i];

    for (int i{n - 1}; i > 0; --i)
      a[i] = a[i] + a[i - 1];

    sort(begin(a), begin(a) + n);

    int mex{0};

    for (int i{1}; i < n; ++i)
    {
      if (a[i] == mex)
        mex++;

      if (a[i] > mex)
        break;
    }

    cout << mex << "\n";
  }

  return 0;
}