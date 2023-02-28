#include <bits/stdc++.h>

using namespace std;

static int h[101]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  short t;
  cin >> t;
  while (t--)
  {
    int n, m, k;

    cin >> n >> m >> k;

    for (int i{0}; i < n; i++)
      cin >> h[i];

    bool flag{true};
    for (int i{0}; i < n - 1; i++)
      if (h[i] >= h[i + 1])
        m += (h[i] - h[i + 1]) + (h[i + 1] - k >= 0 ? k : h[i + 1]);
      else if (h[i] < h[i + 1] and h[i + 1] - h[i] < k)
        m += h[i] - (h[i] - h[i + 1] + k) >= 0 ? h[i] - h[i + 1] + k : h[i];
      else if (h[i] < h[i + 1] and h[i + 1] - h[i] > k)
      {
        m -= h[i + 1] - h[i] - k;

        if (m < 0)
        {
          flag = false;
          break;
        }
      }
      else
        continue;

    cout << (flag ? "YES\n" : "NO\n");
  }

  return 0;
}