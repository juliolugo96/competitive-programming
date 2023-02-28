#include <bits/stdc++.h>

using namespace std;

int n, a, b, c, mem[4001]{0};

int dp(int i)
{
  if (i == 0)
    return 0;
  if (i < 0)
    return -1e9;
  if (mem[i])
    return mem[i];

  return mem[i] = 1 + max({dp(i - a), dp(i - b), dp(i - c)});
}

int main()
{
  cin >> n >> a >> b >> c;

  cout << dp(n) << "\n";

  return 0;
}