#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;

  while (t--)
  {
    int n, x, total_1 = 0, total_2 = 0, total{0};

    cin >> n;

    for (int i{0}; i < n; i++)
    {
      cin >> x;

      x == 1 ? total_1++ : total_2++;
      total += x;
    }
    cout << (total & 1 or (total_1 & 1 or (total_1 == 0 and total_2 & 1)) ? "NO\n" : "YES\n");
  }
}