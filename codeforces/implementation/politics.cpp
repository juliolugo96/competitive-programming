#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n, k;

    cin >> n >> k;
    string opinions[n];

    for (int i{0}; i < n; i++)
      cin >> opinions[i];

    int res{0};
    for (int i{0}; i < n; i++)
      if (opinions[0] == opinions[i])
        res++;

    cout << res << "\n";

    //    cout << "\n\n";
  }

  return 0;
}