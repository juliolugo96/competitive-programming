# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int x[100000]{0};

  for (int i{0}; i < n; ++i)
    cin >> x[i];

  int q{0};
  cin >> q;

  int m[100000]{0};

  for (int i{0}; i < q; ++i)
    cin >> m[i];

  sort(begin(x), begin(x) + n);

  for (int i{0}; i < q; i++){
    if (m[i] < x[0])
    {
      cout << 0 << "\n";
      continue;
    }

    if (m[i] >= x[n - 1])
    {
      cout << n << "\n";
      continue;
    }
    
    auto ptr = upper_bound(begin(x), begin(x) + n, m[i]) - begin(x);
    cout << ptr << "\n";
}

  return 0;
}