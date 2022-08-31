# include <bits/stdc++.h>

using namespace std;

int fast_power(int base, int power) {
    int result = 1;
    while(power > 0) {

        if(power & 1) // Can also use (power & 1) to make code even faster
          result = (result*base);
        
        base = (base * base);
        power >>= 1; // Can also use power >>= 1; to make code even faster
    }
    return result;
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  cout << (n & 1 ? 0 : fast_power(2, n/2))<< "\n";


  return 0;
}