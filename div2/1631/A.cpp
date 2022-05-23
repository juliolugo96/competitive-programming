# include <bits/stdc++.h>

using namespace std;

int main() {
  int t{0};
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    vector<int> a, b;

    for (int i{0}; i < n; ++i)
    {
      int p;
      cin >> p;
      a.push_back(p);
    }

    for (int i{0}; i < n; ++i)
    {
      int p;
      cin >> p;
      b.push_back(p);
    }

    for (int i{0}; i < n; ++i)
    {
      if (b[i] < a[i])
        swap(a[i], b[i]);
    }
    
    int max_a = -1, max_b = -1;

    for (int i{0}; i < n; i++)
    {
      if (a[i] > max_a) max_a = a[i];

      if (b[i] > max_b) max_b = b[i];
    }

    cout << max_a * max_b << "\n";

  }

  return 0;
}