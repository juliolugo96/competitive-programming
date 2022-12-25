# include <bits/stdc++.h>

using namespace std;

static int e[static_cast<int>(2e5)];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    for (int i{0}; i < n; ++i)
      cin >> e[i];
    
      
    int counter{0}, res{0};

    sort(begin(e), begin(e) + n);

    for (int i{0}; i < n; i++)
      if (++counter == e[i])
      {
        res++;
        counter = 0;
      }

    cout << res << "\n";



  }

  return 0;
}