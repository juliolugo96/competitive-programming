# include <bits/stdc++.h>

using namespace std;

static int a[100]{0}, b[100]{0};
static int edmons[100][100]{0};
int n, m;

bool bpm(int boy, bool *seen, int *available_girls)
{
  // cout << "new boy: " << boy << "\n";
  
  for (int i{0}; i < m; ++i)
  {
    if (edmons[boy][i] and !seen[i])
    {
      seen[i] = true;

      // cout << "Available girls ["<< i << "]: " << available_girls[i] << "\n";

      if (available_girls[i] < 0 or bpm(available_girls[i], seen, available_girls))
      {
        available_girls[i] = boy;
        return true;
      }
    }
  }
  return false;
}


int max_bpm()
{
  // cout << "Graph print\n";

  // for (int i{0}; i < n; i++){
  //   for (int j{0}; j < m; j++)
  //     cout << edmons[i][j] << " ";

  //   cout << "\n"; 
  // }
  
  int available_girls[m]{};

  for (int i{0}; i < m; ++i)
    available_girls[i] = -1;
  
  int counter{0};

  for (int i{0}; i < n; ++i)
  {
    bool seen[m]{false};

    if (bpm(i, seen, available_girls)) counter++;
  }

  return counter;
}

int main()
{
  int a[100];
  cin >> n;

  for (int i{0}; i < n; ++i)
    cin >> a[i];

  cin >> m;
  int b[100];

  for (int i{0}; i < m; ++i)
    cin >> b[i];

  for (int i{0}; i < n; i++)
    for (int j{0}; j < m; j++)
      edmons[i][j] = abs(a[i] - b[j]) <= 1 ? 1 : 0;

  cout << max_bpm() << "\n";

  return 0;
}