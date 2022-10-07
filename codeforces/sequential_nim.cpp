# include <bits/stdc++.h>

using namespace std;

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
    int a[100001]{0};

    cin >> n;

    cin >> a[0];


    if (n == 1)
    {
      cout << "First\n";
      continue;
    }
    bool first_wins{a[0] > 1};
    for (int i{1}; i < (n-1); ++i)
    {
      cin >> a[i];
      
      first_wins = (a[i] > 1 and first_wins) or (a[i] == 1 and not first_wins);
    }
      
    cout << (first_wins ? "First\n" : "Second\n");
  }

  return 0;
}