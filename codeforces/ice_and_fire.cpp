#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    string s;

    cin >> s;

    cout << 1 << " ";

    for (int i{2}; i < n; i++)
    {
      int winners[i]{0}, count{0}, latest_winner{-1};
      auto size = s.size();

      for (int j{0}, k{1}; j < size and k < i; j++, k++)
      {
        if (s[j] == '0')
          latest_winner = latest_winner == -1 ? min(k, k + 1) : min(latest_winner, k + 1);
        else
          latest_winner = latest_winner == -1 ? max(i, k + 1) : max(latest_winner, k + 1);

        winners[latest_winner]++;

        if (winners[latest_winner] == 1)
          count++;
      }

      cout << count << " ";
    }
    cout << "\n";
  }

  return 0;
}