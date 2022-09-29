# include <bits/stdc++.h>

using namespace std;

static int a[1000000]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;

  cin >> s;

  size_t n = s.size();
  int k{0};
  for (int i{1}; i < n; i++)
  {  
    if (s[i] == s[i - 1])
      k++;
    
    a[i] = k;
  }

  int m;
  cin >> m;

  while(m--)
  {
    int l, r;
    cin >> l >> r;

    cout << a[r-1] - a[l - 1] << "\n";
  }

  return 0;
}