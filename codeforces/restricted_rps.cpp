#include <bits/stdc++.h>

using namespace std;

int main()
{
  short t;

  cin >> t;

  while (t--)
  {
    short n, a, b, c;
    cin >> n;

    cin >> a >> b >> c;

    string s;

    cin >> s;

    auto rock_count = count(s.begin(), s.end(), 'R');
    auto paper_count = count(s.begin(), s.end(), 'P');
    auto scissor_count = count(s.begin(), s.end(), 'S');

    short win{0};

    win += b >= rock_count ? rock_count : b;
    win += c >= paper_count ? paper_count : c;
    win += a >= scissor_count ? scissor_count : a;

    auto res = ((win >= (int)ceil((float)n / 2));
    cout << res ? "YES\n" : "NO\n");

    if (res)
      for (auto c: s)
        
  }
  return 0;
}