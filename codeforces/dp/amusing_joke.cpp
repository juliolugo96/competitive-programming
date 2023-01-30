#include <bits/stdc++.h>

using namespace std;

static int freq_sum[25]{0}, freq_c[25]{0};

int main()
{
  string a, b, c;

  cin >> a >> b >> c;

  auto sum = a + b;
  bool flag = true;

  for (auto l : sum)
    freq_sum[(int)l - 65]++;

  for (auto l : c)
    freq_c[(int)l - 65]++;

  for (int i{0}; i < 25; i++)
    if (freq_sum[i] != freq_c[i])
    {
      flag = false;
      break;
    }

  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}