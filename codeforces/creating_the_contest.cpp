#include <bits/stdc++.h>

using namespace std;

static long long a[static_cast<int>(2e5) + 1];

int main()
{
  int n;

  cin >> n;

  if (n == 1)
  {
    cout << 1 << "\n";
    return 0;
  }

  long long max_chain{1}, count{1};
  cin >> a[0];
  for (int i{1}; i < n; i++)
  {
    cin >> a[i];

    if (2 * a[i - 1] < a[i])
    {
      // cout << "2 times a: " << 2 * a[i - 1] << " is less than " << a[i] << "\n";
      max_chain = max(max_chain, count);
      count = 1;
      continue;
    }

    count++;
  }

  cout << max(max_chain, count) << "\n";

  return 0;
}