# include <bits/stdc++.h>

using namespace std;

int main()
{
  int k, l, m, n, d;

  cin >> k >> l >> m >> n >> d;

  int dragons[d]{0};

  for(int i{k-1}; i < d; i +=k)
    dragons[i] = 1;

  for(int i{l-1}; i < d; i +=l)
    dragons[i] = 1;

  for(int i{m-1}; i < d; i +=m)
    dragons[i] = 1;

  for(int i{n-1}; i < d; i +=n)
    dragons[i] = 1;

  int count{0};
  for(int i{0}; i < d; i++)
    if (dragons[i]) count++;

  cout << count << "\n";
  
  return 0;
}