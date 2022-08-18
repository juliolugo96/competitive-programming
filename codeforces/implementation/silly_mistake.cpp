# include <bits/stdc++.h>

using namespace std;

static int a[static_cast<int>(1e6) + 1]={0};
static bool mem[static_cast<int>(1e6) + 1]={false};
static bool day_mem[static_cast<int>(1e6) + 1]={false};


# define DEBUG  cout << "---DEBUG ---\n";
# define END_DEBUG cout << "---END DEBUG ---\n\n\n";

int main()
{

  int n;
  cin >> n;
  bool flag = false;
  int count_events{0}, count{0}, days{0}, event_days[n]={0};

  for (int i{0}; i< n; ++i)
  {
    cin >> a[i];

    DEBUG
    cout << "a[" << i << "]: " << a[i] << "\n";
    cout << "Events count: " << count_events << "\n";
    cout << "Employeer in office: " << count << "\n";
    cout << "Current days: " << days << "\n";
    END_DEBUG



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

    if (day_mem[abs(a[i])] && a[i] > 0)
    {
      flag = true;
      continue;
    }

    if (a[i] > 0) day_mem[abs(a[i])] = true;

    count_events++;
    mem[abs(a[i])] ? count++ : count--;

    if (not count)
    {
      event_days[days] = count_events;
      int j{0};

      cout << "Count events: " << count_events << "\n";
      while(count_events)
      {
        if (day_mem[j])
        {
          day_mem[j] = false;
          count_events--;
        }
        j++;
      }
      
      days++;
    }
  }

  if (flag)
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