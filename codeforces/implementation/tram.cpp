# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int max{0}, curr{0};

  while (n--)
  {
    int a, b;

    cin >> a >> b;

    curr += b - a;
    if (curr > max)
      max = curr;
  }


  cout << max << "\n";


  return 0;
}