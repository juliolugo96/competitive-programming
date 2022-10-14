# include <bits/stdc++.h>

using namespace std;

int main()
{
  int a1, a2, time{0};

  cin >> a1 >> a2;

  if (a1 == 1 and a2 ==1)
    {
      cout << 0 << "\n";
      return 0;
    }

  while(a1 > 0 and a2> 0)
  {
    int aux = a1;
    a1 += a1 >= a2 ? -2 : 1;
    a2 += a2 > aux ? -2 : 1;
    time++;
  }

  cout << time << "\n";

  return 0;
}