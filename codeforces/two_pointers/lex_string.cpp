# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short m, n, k;
    string a, b, c;
    cin >> n >> m >> k;
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int a_k{0}, b_k{0}; 

    for (int i{0}, j{0}; i < n && j < m; )
    {
      
      if (a[i] < b[j])
      {
        a_k++;
        if (a_k > k) {
          b_k++;
          c.push_back(b[j]);
          j++;
          a_k = 0;
        } else 
        {
          c.push_back(a[i]);
          i++;
          b_k = 0;
        } 
      }
      else // if (a[j] < a[i])
      {
        b_k++;
        if (b_k > k)
        {
          a_k++;
          c.push_back(a[i]);
          i++;
          b_k = 0;
        } 
        else
        {
          c.push_back(b[j]);
          j++;
          a_k = 0;
        }
        
      }
    }

    cout << c << "\n";

  }

  return 0;
}