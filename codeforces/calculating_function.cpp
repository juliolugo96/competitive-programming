# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  long long n, acc{0};

  cin >> n;

  cout << (long long)((n & 1 ? -1 : 1)*ceil((double)(n)/(2))) << "\n";
  return 0;
}