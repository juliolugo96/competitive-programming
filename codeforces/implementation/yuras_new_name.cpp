#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    string s;

    cin >> s;
    auto n = s.size();
    int count{0}, temp_a{0}, temp_b{0};

    if (s[0] == '_')
      count++;

    if (s[n - 1] == '_')
      count++;

    if (n == 1 and s[0] == '^')
      count++;

    for (int i{1}; i < n; ++i)
      if (s[i] == '_' and s[i - 1] != '^')
        count++;

    cout << count << "\n";
  }

  return 0;
}
