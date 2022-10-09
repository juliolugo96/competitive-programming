# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;

  cin >> n >> k;

  for (int i{0}; i < k; ++i)
  {
    auto last_digit = n % 10;

    if (last_digit) n--;
    else n /= 10; 
  }

  cout << n << "\n";

  return 0;
}