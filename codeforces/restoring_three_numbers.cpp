#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x[4]{0};

  for (int i{0}; i < 4; i++)
    cin >> x[i];

  sort(begin(x), begin(x) + 4);

  int a = x[0] + x[1] - x[3];
  int b = x[1] - a;
  int c = x[2] - b;

  cout << a << " " << b << " " << c << "\n";

  return 0;
}