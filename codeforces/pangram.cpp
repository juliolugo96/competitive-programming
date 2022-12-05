# include <bits/stdc++.h>

using namespace std;


string chk_Pangram(string s)
{
    int Arr[26] = { 0 };
    
    for (int i = 0; i < s.length(); i++) 
    {
        if (isupper(s[i])) 
           Arr[ s[i] - 'A' ]++;
        else if (islower(s[i])) 
            Arr[ s[i] - 'a' ]++;
    }
 
    // Iterating through array to check for the presence of 0 value
    for (int i = 0; i < 26; i++) 
        if(Arr[i] == 0)
          return "NO";
    
 return "YES";
}

int main()
{
  int n;

  cin >> n;

  string s;
  cin >> s;

  cout << chk_Pangram(s) << "\n";

  return 0;
}