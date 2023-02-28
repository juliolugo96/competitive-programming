#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
  int n;

  cin >> n;
  pair<ll, string> data[1000];

  map<string, ll> mem;

  size_t power_set_size = pow(2, 3);
  string base_string = "ABC";

  for (int i{1}; i < power_set_size; i++)
  {
    string key_string;
    for (int j{0}; j < 3; j++)
      if (i & (1 << j))
        key_string.push_back(base_string[j]);

    mem[key_string] = 1e8;
  }

  for (int i{0}; i < n; i++)
  {
    cin >> data[i].first >> data[i].second;

    sort(data[i].second.begin(), data[i].second.end());
    mem[data[i].second] = min(data[i].first, mem[data[i].second]);
  }

  ll count = min({mem["A"] + mem["B"] + mem["C"], mem["AB"] + mem["BC"], mem["AB"] + mem["AC"], mem["BC"] + mem["AC"],
                  mem["A"] + mem["BC"], mem["AC"] + mem["B"], mem["AB"] + mem["C"], mem["ABC"]});

  cout << (count >= 1e8 ? -1 : count) << endl;

  return 0;
}