#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;

  cin >> n >> k;

  int available_time = 240 - k;
  int spend_time{0}, num_probs{0};

  if (available_time < 5)
  {
    cout << 0 << "\n";
    return 0;
  }

  while (spend_time + 5 * (num_probs + 1) <= available_time)
  {
    num_probs++;
    spend_time += 5 * num_probs;

    if (num_probs == n)
      break;
  }

  cout << num_probs << "\n";

  return 0;
}