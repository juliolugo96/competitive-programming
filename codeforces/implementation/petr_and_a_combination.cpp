#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int fast_pow(int base, int exp)
{
  int result = 1;

  while (exp > 0)
  {
    if (exp & 1)
      result = (result * base) % MOD;

    base = (base * base) % MOD;
    exp >>= 1;
  }

  return result;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  short n;

  cin >> n;

  short a[15]{0};

  for (int i{0}; i < n; ++i)
    cin >> a[i];

  size_t size = fast_pow(2, n);
  bool found{false};

  for (int i{0}; i < size; i++)
  {
    int res{0};
    for (int j{0}; j < n; j++)
      res = (res + ((i & (1 << j)) ? a[j] : -a[j])) % 360;

    if (!res)
    {
      cout << "YES\n";
      found = true;
      break;
    }
  }

  if (!found)
    cout << "NO\n";

  return 0;
}