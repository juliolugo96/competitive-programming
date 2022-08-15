# include <bits/stdc++.h>

using namespace std;

# define ioboost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
  short n;
  cin >> n;
  
  for (int i{0}; i < n; ++i)
  {
    int c{0}, sum{0};

    cin >> c >> sum;

    if (c == 1)
    {
      cout << sum * sum << "\n";
      continue;
    }

    if (c >= sum) {
      cout << sum << "\n";
      continue;
    }

    int div = sum/c;
    int r = sum % c;

    cout << (r * (div + 1)*(div + 1)) + (c - r)*(div*div) << "\n";
  }

  return 0;
}