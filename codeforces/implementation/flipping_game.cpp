# include <bits/stdc++.h>

using namespace std;

int main()
{
  short n;
  cin >> n;

  short a[n]{0};
  int count_1{0};
  for (int i{0}; i < n; ++i)
  {
    cin >> a[i];

    if (a[i]) count_1++;
  }

  if (count_1 == n)
    {
      cout << n - 1 << "\n";
      return 0;
    }

  int max_sum{0}, count{0};
  for (int i{0}; i < n; ++i)
  {
    if (!a[i] and count >= 0) count++;
    else if (!a[i] and count < 0) count = 1;
    else count--;

    max_sum = max(count, max_sum);
  }

  cout << count_1 + max_sum << "\n";

  return 0;
}