# include <bits/stdc++.h>
 
# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
 
using namespace std;
 
static int char_map[256]{-1};
 
int main()
{
  io_boost
  string s;
  cin >> s;
 
  size_t n = s.size();
 
  char model[3] = {'[', ':'};
  int it{0}, count{0}, last_colon_pos{5000001}, first_colon_pos{-1}, last_bracket_pos{-1};
 
  for (int i{0}; i < n; i++)
  {
    // cout << "Count: " << count << "\n";
    
    
    if (it > 1)
    {
      if (s[i] != '|')
        count++;
    }
     else {
      if (s[i] == model[it])
      {
        it++;
        if (s[i] == ':' and first_colon_pos == -1)
          first_colon_pos = i;
 
      } else
        count++;
    }
  }
 
  for (int i = n - 1; i >= 0; --i)
  {
    if (s[i] == '|')
    {
      count++;
      continue;
    }
      
    
    if (s[i] == ']')
    {
      last_bracket_pos = i;
      continue;
    }
      
    
    if (s[i] == ':' and last_bracket_pos != -1 and first_colon_pos < i)
    {
      last_colon_pos = i;
      break;
    }
 
  } 

  if (it < 2 or last_colon_pos > last_bracket_pos)
    cout << -1 << "\n";
  else
    cout << n - (count - 2) << "\n";
 
  return 0;
}