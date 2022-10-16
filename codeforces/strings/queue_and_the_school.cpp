# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, t;
  string s;

  cin >> n >> t;

  cin >> s;

  for (int i{0}; i < t; ++i)
  {
    size_t q_size = s.size();

    for (int j{1}; j < q_size; j++)
    {
      if ( s[j] == 'G' and s[j - 1] == 'B')
      {
        s[j] = 'B';
        s[j - 1] = 'G';
        j++;
        continue;
      }

    }
  }

  cout << s << "\n";


  return 0;
}