# include <bits/stdc++.h>

using namespace std;

int main()
{
  short n;

  cin >> n;
  cout << "I hate ";
  for (int i{0}; i < n - 1; ++i)
    cout << (i &1 ? "that I hate " : "that I love ");
  
  cout << "it\n";

  return 0;
}