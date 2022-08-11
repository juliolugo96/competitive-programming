# include <bits/stdc++.h>

using namespace std;

int main()
{
  short n, count{0}, a, b, c;

  cin >> n;

  while (n--)
  {
    cin >> a >> b >> c;
    count = a + b + c >=2 ? count + 1 : count;
  }
  cout << count << "\n";
  return 0;
}