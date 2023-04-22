#include <bits/stdc++.h>

using namespace std;

int main()
{
  size_t n;

  string s1, s2;
  cin >> n;
  cin >> s1 >> s2;

  int count{0};
  for (int i{0}; i < n; ++i)
  {
    if (s1[i] != s2[i])
    {
     // cout << "Pos " << i << ": " << "Distinct " << s1[i] << " of " << s2[i] << "\n";
      if (i != n - 1 and s1[i + 1] != s2[i + 1] and s1[i] != s1[i + 1])
      {
         // cout << "[" << i << "]: " << s1[i] << "\t" << s2[i] << "\n";

        count++;
        // cout << "Count: " << count << "\n\n";
        i++;
        continue;
      }

      count++;
    }
  }

  cout << count << "\n";

  return 0;
}