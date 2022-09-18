
# include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  string s;
  cin >> s;
  for (auto c : s)
  {
    switch(c)
    {
     case 'a':
     case 'A':
     case 'O':
     case 'o':
     case 'Y':
     case 'y':
     case 'E':
     case 'e':
     case 'U':
     case 'u':
     case 'I':
     case 'i':
        continue;
        break;
     default:
        cout << "." << (char)tolower(c);
        break;
    }
  }
  
  cout << "\n";
 return 0;
}

