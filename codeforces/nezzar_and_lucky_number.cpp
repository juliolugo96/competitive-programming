# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;
  cin >>t;

  while(t--)
  {
    int q;
    short d;

    cin >> q >> d;

    int lucky_numbers[q], j{0};
    for (int i{0}; i < q; i++)
    {
      int a = i + 1;
      
      while(a > 0)
      {
        int mod = a % 10;
        a /= 10;
        if (mod == d)
        {
          lucky_numbers[j] = i + 1;
          j++;
        }
      }
    }

    for (int i{0}; i < q; ++i)
    {
      int a;

      cin >> a;
      bool flag{false};
      while(a > 0)
      {
        int mod = a % 10;
        a /= 10;
        if (mod == d)
          {
            cout << "YES ";
            flag = true;
            break;
          }
      }

    }


  }

  return 0;
}