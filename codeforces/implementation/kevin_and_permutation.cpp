# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;
  cin >> t;


  while( t-- )
  {
    int n;

    cin >> n;

    for (int i{n & 1 ? n/2 + 1 : n/2}, j{n}; i > 0; i--, j--){
      cout << i << " ";
      
      if (i == 1 and  (n & 1))
        continue;
        
      cout << j << " ";}

    cout << "\n";

  }


  return 0;
}