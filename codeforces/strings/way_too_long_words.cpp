# include <bits/stdc++.h>

using namespace std;

int main() 
{
short n;
cin >> n;

while(n--)
{
  string s;
  cin >> s;

  size_t size = s.size();

  if (size <= 10)
  {
    cout << s << "\n";
    continue;
  }

  cout << s[0] << size-2 << s[size -1] << "\n";
}

return 0;

}