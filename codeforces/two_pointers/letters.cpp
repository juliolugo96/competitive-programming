# include <bits/stdc++.h>

using namespace std;

int main()
{
  int m, n;

  cin >> n >> m;
  int dorms[n]{0};
  
  for (int i{0}; i < n; ++i) {
    cin >> dorms[i];
    if (i > 0) dorms[i] += dorms[i - 1];
  }
    
  for (int i{0}; i < m;++i)
  {
    int rec;
    cin >> rec;

    if (rec == 1)
    {
      cout << "1 1\n";
      continue;
    }

    int low{0}, high{n-1};

    while (low <= high) {
      int mid = (low + high) /2;
    
      if (rec > dorms[mid-1] && rec <= dorms[mid])
      {
        cout << mid + 1 << " " << rec - dorms[mid - 1] << "\n";
        break;
      }

      if (rec < dorms[mid-1])
        high = mid - 1;
      else
        low = mid + 1;
    }

  }
  
  return 0;
}
