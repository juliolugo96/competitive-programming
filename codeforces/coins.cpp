#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    unsigned long long n, k;

    cin >> n >> k;

    cout << (n & 1 and not(k & 1) ? "NO\n" : "YES\n");
  }

  return 0;
}