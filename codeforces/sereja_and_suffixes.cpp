# include <bits/stdc++.h>

using namespace std;

static int a[100001], results[100001];
static bool nums[100001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n, m;

  cin >> n >> m;
  int counter{0};
  for (int i{0}; i < n; ++i)
  {
    cin >> a[i];
    if (!nums[a[i]])
    {
      nums[a[i]] = true;
      counter++;
    }
  }

  for (int i{0}; i < n; ++i)
  {
    if (nums[a[i]])
    {
      results[i] = counter;
      counter--;
      nums[a[i]] = false;
    } e
  }

  while(m--)
  {
    int l;

    cin >> l;

    cout << results[l - 1 ] << "\n";
  }

  return 0;
}