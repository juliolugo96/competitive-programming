# include <bits/stdc++.h>

using namespace std;

int main()
{
  int d, count{0};

  for (int i{0}; i < 5; i++)
  {
    for (int j{0}; j < 5; j++)
    {
      cin >> d;

      if (d == 1)
        count = abs(j-2) + abs(i - 2);
    }

  }

  cout << count << "\n";
  return 0;
}