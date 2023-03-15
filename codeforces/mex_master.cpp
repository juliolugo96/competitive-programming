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

    sort(begin(a), begin(a) + n);

    int mex{0};

    for (int i{1}; i < n; ++i)
      cout << mex << " ";

    cout << "\n";

    for (int i{1}; i < n; ++i)
    {
      if (a[i] == mex)
      {
        mex++;
        continue;
      }

      if (a[i] > mex)
        break;
    }

    cout << mex << "\n";
  }

  return 0;
}