#include <bits/stdc++.h>

using namespace std;

static int integers[101]{0};

int main()
{
  int n;
  cin >> n;
  pair<int, int> odd{0, 0}, even{0, 0};
  for (int i{0}; i < n; i++)
  {
    cin >> integers[i];
    if (integers[i] & 1)
    {
      odd.first++;
      odd.second = i + 1;
    }
    else
    {
      even.first++;
      even.second = i + 1;
    }
  }

  cout << (odd.first == 1 ? odd.second : even.second) << "\n";

  return 0;
}