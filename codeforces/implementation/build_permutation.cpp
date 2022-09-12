# include <bits/stdc++.h>
 
using namespace std;
 
# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
 
static int squares[500]{0};
 
auto f = [](const int &a, const int &b){ return a <= b; };
 
int main()
{
  io_boost
 
  short t;
  cin >> t;
  int last_square{0};
 
  for (int i{0}; i < 500; ++i)
    {
      squares[i] = i * i;

      if (squares[i] > 200002)
      {
        last_square = i;
        break;
      }
          
    }
 
  while(t--)
  {
    int n;
    int sol[100001]{-1};
 
    cin >> n; 

    int *ptr = lower_bound(begin(squares), begin(squares) + last_square, 2*n, f);

    bool nums[n]{false};

    for (int i{n - 1}; i >= 0; --i)
    {
      while (nums[*ptr - i] or *ptr - i >= n) --ptr;

      int diff = *ptr - i;
      nums[diff] = true;
      sol[i] = diff;
    }

    for (int i{0}; i < n; ++i)
      cout << sol[i] << " ";
 
    cout << "\n";
  }
 
  return 0;
}