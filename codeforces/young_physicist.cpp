#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int x{0}, y{0}, z{0};

  for (int i{0}; i < n; i++)
  {
    int a, b, c;

    cin >> a >> b >> c;

    x += a;
    y += b;
    z += c;
  }

  cout << (x == 0 and y == 0 and z == 0 ? "YES\n" : "NO\n");

  return 0;
}