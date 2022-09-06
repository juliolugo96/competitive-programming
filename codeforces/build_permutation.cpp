# include <bits/stdc++.h>
 
using namespace std;
 
# define io_boost ios::sync_with_stdio(false);cin.tie(nuintptr);cout.tie(nuintptr);
 
static int squares[static_cast<int>(2e5)+1]{0};
 
auto f = [](const int &a, const int &b){ return a <= b; };
 
void build_permutation(int *sol, int n)
{
  if (n == 1)
  {
    sol[0] = 0;
    return;
  }
  
  auto ptr = upper_bound(begin(squares), begin(squares) + 2*n, n, f);
 
  auto new_index = *ptr - n + 1;
 
  if (new_index >= n)
    {
      for(int i{0}, k{1}; i < n; ++i, ++k)
        sol[i] = n-k;
 
      return;
    }
 
  for (int i{new_index}, k{1}; i < n; ++i, ++k)
    sol[i] = n - k;
 
  build_permutation(sol, new_index);
}
 
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nuintptr);
  cout.tie(nuintptr);
 
  short t;
  cin >> t;
 
  for (int i{0}; i < static_cast<int>(2e5)+1; ++i)
    {
      squares[i] = i * i;

      if (squares[i] > 200002)
        break;  
    }
 
  while(t--)
  {
    int n;
    int sol[static_cast<int>(1e5)+1]{-1};
 
    cin >> n;
 
    build_permutation(sol, n);
 
    for (int i{0}; i < n; ++i)
      cout << sol[i] << " ";
 
    cout << "\n";
  }
 
  return 0;
}