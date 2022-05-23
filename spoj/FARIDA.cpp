# include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

ull get_max_sum(vector<int> &v, int i, ull &counter ) {
  if (v.size() == 0)
    return counter;

  if (v.size() <= i)
    return counter;

  ull new_counter = counter + v[i];
  ull a = get_max_sum(v, i + 2, new_counter);
  ull b = get_max_sum(v, i + 1, counter);    
  return max(a, b);
}

int main(int argc, char const *argv[])
{
  int t;

  cin >> t;
  while (t--) {
    int n;

    cin >> n;
    vector<int> v(n);

    for (auto i{0}; i < n; ++i) {
      ull j;

      cin >> j;
      v[i] = j;
    }
    ull counter{0};

    int i{0};

    ull val = get_max_sum(v, i, counter);
    cout << val << endl;
  } 


  return 0;
}