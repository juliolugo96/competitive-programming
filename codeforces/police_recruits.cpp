#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;
  int count{0}, res{0};

  for (int i{0}; i < n; i++)
  {
    int p;

    cin >> p;

    count += p;

    if (count < 0)
    {
      count = 0;
      res++;
    }
  }

  cout << res << "\n";

  return 0;
}