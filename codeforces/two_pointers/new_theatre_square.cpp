# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;
  cin >> t;

  while (t--)
  {
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    int c_x{0}, c_y{0};
    for (int i{0}; i < n; ++i)
    {
      bool are_consec = false;
      for (int j{0}; j < m; ++j)
      {
        char a_i{0};
        cin >> a_i;

        if (a_i == '.' and are_consec) {
          are_consec = false;
          min(2*x, y) == 2*x ? c_x += 2*x : c_y += y;
        }
        else if (a_i == '*' and are_consec) {
          are_consec = false;
          c_x += x;
        }
        else if (a_i == '.') are_consec = true;
      }

      if (are_consec) c_x += x;
    }

    cout << (c_x + c_y ) << "\n";

  }
  
  return 0;
}
