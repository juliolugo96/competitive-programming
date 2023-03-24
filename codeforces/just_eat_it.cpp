#include <bits/stdc++.h>

using namespace std;

static int a[static_cast<int>(1e6)]{0};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    for (int i{0}; i < n; i++)
      cin >> a[i];

    cout << "YES\n";
  }

  return 0;
}