# include <bits/stdc++.h>

using namespace std;

int main()
{
  int k{0}, i{0};

  cin >> k;
  
  for (int curr{19}, count{0};; curr += 9)
  {
    int sum{0};

    for (int x = curr; x > 0; x /= 10) sum += x % 10;

    if (sum == 10) count++;

    if (k == count)
      {
        cout << curr << "\n";
        break;
      }

  }

  return 0;
}