# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, sum{0};

  cin >> n;

  while(n--)
  {
    int p, q;
    cin >> p >> q;

    sum += q - p >= 2 ? 1 : 0;
  }

  cout << sum << "\n";

  return 0;
}