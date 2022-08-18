# include <bits/stdc++.h>

using namespace std;

static bool mem[static_cast<int>(1e6) + 1]={false};

# define DEBUG  cout << "---DEBUG ---\n";
# define END_DEBUG cout << "---END DEBUG ---\n\n\n";

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  int a[n]{0};
  bool flag = false;
  int count_events{0}, count{0}, days{0}, event_days[n]={0}, prev_day{-1};

  map<pair<int, int>, bool> daily_map;
  for (int i{0}; i< n; ++i)
  {
    cin >> a[i];

    // DEBUG
    // cout << "a[" << i << "]: " << a[i] << "\n";
    // cout << "Events count: " << count_events << "\n";
    // cout << "Employeer in office: " << count << "\n";
    // cout << "Current days: " << days << "\n";
    // END_DEBUG

    if (flag) continue;

    if (mem[abs(a[i])] and a[i] > 0)
    {
      flag = true;
      continue;
    }
      

    if (not mem[abs(a[i])] and a[i] < 0)
    {
      flag = true;
      continue;
    }

    mem[abs(a[i])] = a[i] > 0;

    if (a[i] > 0 and daily_map[{a[i], days}])
    {
      flag = true;
      continue;
    }

    if (a[i] > 0) daily_map[{abs(a[i]), days}] = true;

    count_events++;
    mem[abs(a[i])] ? count++ : count--;

    if (not count)
    {
      event_days[days] = count_events;
      
      count_events = 0;
      days++;
      prev_day++;
    }
  }

  if (flag or count > 0)
  {
    cout << "-1\n";
    return 0;
  }

  cout << days << "\n";
  for (int i{0}; i < days; i++)
    cout << event_days[i] << " ";

  cout << "\n";
  return 0;
}