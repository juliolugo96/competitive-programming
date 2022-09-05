# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

static bool squares[static_cast<int>(2e6)+1]{false};

bool check_perfect_square(int n)
{
    return ceil((double)sqrt(n)) == floor((double)sqrt(n));
}

int main()
{
  short t;
  cin >> t;

  for (int i{0}; i < static_cast<int>(2e6)+1; ++i)
    squares[i] = i * i;

  while(t--)
  {
    int n;
    cin >> n;

    if (n == 0)
    {
      cout << 0 << "\n";
      continue;
    }

    if (check_perfect_square(n))
    {
      cout << 0 << " ";
      for (int i{n-1}; i > 0; i--)
        cout << i << " ";

      cout << "\n";
      continue;
    }


    


  }

  return 0;
}