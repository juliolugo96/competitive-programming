# include <bits/stdc++.h>

using namespace std;

int main()
{
  long n, k, w;

  cin >> k >> n >> w;
  long sum{0};
  for (long i={1}; i <=w; ++i )
    sum += i*k;

  cout << sum - n << "\n";

  return 0;
}