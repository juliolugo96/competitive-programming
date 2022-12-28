#include <bits/stdc++.h>

using namespace std;

static int abc[26]{0};

int main()
{
  int n, k;

  cin >> n >> k;

  string s;

  cin >> s;

  for (int i{0}; i < k; ++i)
  {
    char a;
    cin >> a;
    abc[(int)a - 97] = 1;
  }

  long long total{0};
  bool is_key = false;

  auto calc_total = [](int n)
  {
    return (long long)(((long long)(n) * (long long)(n + 1)) / 2);
  };

  for (int i{0}; i < n; ++i)
  {
    if (!abc[(int)s[i] - 97])
      continue;

    int j{i};

    while (j < n and abc[(int)s[j] - 97])
      j++;

    // cout << "i: " << i << " j: " << j << "\n";

    total += calc_total(j - i);
    i = j;
  }

  cout << total << "\n";

  return 0;
}