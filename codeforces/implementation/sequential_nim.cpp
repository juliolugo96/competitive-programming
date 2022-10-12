# include <bits/stdc++.h>

using namespace std;

static int a[100001]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  short t;
  cin >>t;

  while(t--)
  {
    int n;

    cin >> n;

    bool wins{false}, flag{false};
    
    for (int i{0}; i < n; ++i)
    {
      cin >> a[i];

      if ( flag)
        continue;

      wins = not wins;

      if(a[i] != 1) 
        flag = true;
       
    }

    cout << (wins ? "First\n" : "Second\n");
  }

  return 0;
}