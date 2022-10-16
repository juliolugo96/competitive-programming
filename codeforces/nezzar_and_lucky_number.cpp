# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  short t;
  cin >>t;

  while(t--)
  {
    int q;
    short d;

    cin >> q >> d;

    int lucky_numbers[q], j{0};

    for (int i{0}; i < q; ++i)
    {
      int a;

      cin >> a;
      bool flag{false};

      if (a % d == 0 or a >= 10*d) {
        cout << "YES\n";
        continue;
      }

      bool is_lucky{false};

      // cout << "a: " << a << "\n";

      for (int j{0}; j <= a; j += d)
      {
        int aux = a - j;

        // cout << "Checking if aux is lucky number: " << aux << "\n";
        while (aux > 0)
        {
          int mod = aux % 10;
          aux /= 10;

          if (mod == d)
          {
            is_lucky = true;
            break;
          }
        }

        if (is_lucky)
        {
          cout << "YES\n";
          break;
        }
      }

      if (not is_lucky) cout << "NO\n";
      
    }


  }

  return 0;
}