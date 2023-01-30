#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n, a, b, c;
    cin >> n;

    cin >> a >> b >> c;

    string s;

    cin >> s;

    int rock_count = static_cast<int>(count(s.begin(), s.end(), 'R'));
    int paper_count = static_cast<int>(count(s.begin(), s.end(), 'P'));
    int scissor_count = static_cast<int>(count(s.begin(), s.end(), 'S'));

    int rock_wins = min(rock_count, b);
    int paper_wins = min(paper_count, c);
    int scissors_wins = min(scissor_count, a);

    int alice_win = 2 * (rock_wins + paper_wins + scissors_wins) >= n;

    cout << (alice_win ? "YES\n" : "NO\n");

    if (alice_win)
    {
      map<char, pair<int, char>> mem = {{'R', {rock_wins, 'P'}}, {'P', {paper_wins, 'S'}}, {'S', {scissors_wins, 'R'}}};

      a -= mem['S'].first;
      b -= mem['R'].first;
      c -= mem['P'].first;

      for (auto &c : s)
        if (mem[c].first-- > 0)
          cout << mem[c].second;
        else if (a-- > 0)
          cout << 'R';
        else if (b-- > 0)
          cout << 'P';
        else
          cout << 'S';

      cout << "\n";
    }
  }
  return 0;
}