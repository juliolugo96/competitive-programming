#include <bits/stdc++.h>

using namespace std;

static int s[501]{0};

int main()
{
  s[3] = 6;
  for (int i{4}; i <= 500; i++)
    s[i] = s[i - 1] + i * (i - 1);

  short int n;

  cin >> n;

  cout << s[n] << "\n";
  return 0;
}