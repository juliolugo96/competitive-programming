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

    size_t n = s.size();
    int count{0};
    for (int i{0}; i < n; i++)
    {
      int c = s[i] - '0';

      //      cout << "C: " << c << " ";

      if (c != 0)
        count++;
    }
    //   cout << "\n";
    cout << count << "\n";

    for (int i{0}; i < n; i++)
    {

      int c = s[i] - '0';

      if (c != 0)
        cout << c * (pow(10, n - i - 1)) << " ";
    }
    cout << "\n";
  }
}