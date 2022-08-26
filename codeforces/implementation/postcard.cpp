# include <bits/stdc++.h>

using namespace std;

# define io_boost ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
# define CANDY_CANE '?'
# define SNOWFLAKE '*'

static pair<char, char> map_s[200];

int main()
{
  io_boost
  string s, res;
  short k;

  cin >> s;
  size_t n = s.size();

  size_t count_candy{0}, count_flakes{0};

  cin >> k;
  for (int i{0}; i < n; ++i)
  {
    if (s[i] == CANDY_CANE)
    {
      map_s[i - 1] = {s[i - 1], CANDY_CANE};
      count_candy++;
    }
      
    if (s[i] == SNOWFLAKE)
    {
      map_s[i - 1] = {s[i - 1], SNOWFLAKE};
      count_flakes++;
    }
  }

  int min_size = n - 2*(count_flakes + count_candy);

  if ((count_flakes == 0 and min_size + count_candy < k) or (
    min_size > k ) )
  {
    cout << "Impossible\n";
    return 0;
  }

  for (int i{0}; i < n; ++i)
  {
    if (s[i] == SNOWFLAKE or s[i] == CANDY_CANE)
      continue;
    else if (map_s[i].second == CANDY_CANE)
    {
      if (min_size < k) {
        res.push_back(map_s[i].first);
        min_size++;
      };
    } else if (map_s[i].second == SNOWFLAKE)
      {
        if (min_size < k)
        {
          while(min_size < k)
            {
              res.push_back(map_s[i].first);
              min_size++;
            }
        }

      } else {
        res.push_back(s[i]);
      }
  }

  cout << res << "\n";

  return 0;
}