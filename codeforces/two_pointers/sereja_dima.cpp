# include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a;

  for (int i{0}; i < n; i++)
  {
    int p;
    cin >> p;
    a.push_back(p);
  }

  int i{0}, j{n - 1}, sereja{0}, dima{0};

  while(i <= j)
  {
    sereja += max(a[i], a[j]);
    a[i] > a[j] ? i++ : j--;

    if (i > j) break;

    dima += max(a[i], a[j]);
    a[i] > a[j] ? i++ : j--;
  }

  cout << sereja << " " << dima << "\n";

  return 0;
}
