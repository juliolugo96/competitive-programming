# include <bits/stdc++.h>

using namespace std;

# define LOW 0
# define HIGH 1
# define SUM 2

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  short t;
  cin >> t;

  while (t--)
  {
    int n, k;

    cin >> n >> k;

    string s;
    cin >> s;

    int max_black[3]={0};

    auto set_val = [&max_black](int i, int j, int sum) {
      max_black[LOW]=i;
      max_black[HIGH]=j;
      max_black[SUM]=sum;
    };
    bool flag = false;
    int prev_sum{0};
    for (int i{0}, j{k-1}; j < n; i++, j++)
    {
      int sum{0};
      if (i == 0)
      {
        for (int a{0}; a <= j; a++)
          if (s[a] == 'B')
            sum++;
        
        if (sum == k) 
        {
          cout << 0 << "\n";
          flag = true;
          break;
        }

        set_val(i, j, sum);
        prev_sum = sum;
        continue;    
      }
      int found_prev = s[i - 1] == 'B' ? -1 : 0, found_next = s[j] == 'B' ? 1 : 0;
      sum = prev_sum + found_prev + found_next;
      prev_sum = sum;

      if (sum == k) 
      {
        cout << 0 << "\n";
        flag = true;
        break;
      }

      if (sum > max_black[SUM])
        set_val(i, j, sum);
    }
      
      if (not flag)
      cout << k - max_black[SUM] << "\n";

  }

  return 0;
}