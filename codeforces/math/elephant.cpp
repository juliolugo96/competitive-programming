# include <bits/stdc++.h>

using namespace std;

int main()
{
  int x;

  cin >> x;

  int div{5}, res{0};
  
  while(x > 5)
  {
    x -= div;
    res++;
  }


  cout << res + 1 << "\n";

  return 0;
}