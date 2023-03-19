#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;
  int a[n]{0}, count{0};
  cin >> a[0];
  int min_value{a[0]}, max_value{a[0]};

  for (int i{1}; i < n; i++)
  {
    cin >> a[i];

    if (a[i] > max_value)
    {
      count++;
      max_value = a[i];
    }
    else if (a[i] < min_value)
    {
      count++;
      min_value = a[i];
    }
  }

  cout << count << "\n";

  return 0;
}