# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int max{0};

  while (n--)
  {
    int a, b;

    cin >> a >> b;

    if (b > max)
      max= b;
  }


  cout << max + 1 << "\n";


  return 0;
}