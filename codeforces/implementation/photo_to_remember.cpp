# include <bits/stdc++.h>

using namespace std;

static pair<int, int> friends[200000];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n;
  pair <int, int> higher = {0, 0}, second_to_higher = {0, 0};

  cin >> n;

  unsigned long long sum_w{0};

  for (int i{0}; i < n; ++i)
  {
    int w, h;

    cin >> w >> h;

    if (h >= higher.second)
    {
      second_to_higher = higher;
      higher = {i, h};
    }

    if (h > second_to_higher.second and h < higher.second)
      second_to_higher = {i, h};


    sum_w += w;

    friends[i] = {w, h};
  }


  for (int i{0}; i < n; ++i)
    cout << ((sum_w - friends[i].first)*(higher.first == i ? second_to_higher.second : higher.second)) << " ";

  cout << "\n";
    

  return 0;
}