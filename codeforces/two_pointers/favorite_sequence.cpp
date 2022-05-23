# include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a[n] = {0}, out[n] = {0};

    for (int i{0}; i < n; ++i)
      cin >> a[i];

    bool init = true;

    for (int i{0}, j{n-1}, k{0}; k < n; k++)
    {
      out[k] = init ? a[i] : a[j];
      init ? i++ : j--;
      init = !init;
    }

    for (int i{0}; i < n; ++i)
      cout << out[i] << " ";

    cout << "\n";

  }
  
  return 0;
}
