#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    short n;
    int dislikes{0};

    cin >> n;

    int b[n]{0};

    for (int i{0}; i < n; i++)
    {
      cin >> b[i];

      if (b[i] < 0)
        dislikes++;
    }

    bool max = true;
    for (int i{0}, k{0}; i < n; i++)
    {
      if (i >= n - dislikes)
        cout << --k << " ";
      else
      {
        cout << ++k << " ";
      }
    }
    cout << "\n";
    for (int i{0}, k{0}; i < n; i++)
      if (i & 1 and dislikes)
      {

        dislikes--;
        cout << --k << " ";
      }
      else
      {
        cout << ++k << " ";
      }

    cout << "\n";
  }

  return 0;
}