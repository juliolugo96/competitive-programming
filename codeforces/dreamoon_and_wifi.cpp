#include <bits/stdc++.h>

using namespace std;

int q_marks{0};

long double nCr(int N, int r)
{
  long double u = 1, d = 1;
  if (r > N)
    return 0.0;
  r = min(r, N - r);
  for (long double i = 1; i <= r; i++)
  {
    d *= i;
    u *= (N - i + 1);
  }
  return u / d;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s1, s2;

  cin >> s1 >> s2;

  int count_s1{0}, count_s2{0};
  size_t n = s1.size();

  if (s1 == s2)
  {
    cout << "1.000000000\n";
    return 0;
  }

  for (int i{0}; i < n; i++)
  {
    if (s1[i] == '+')
      count_s1++;
    else
      count_s1--;

    if (s2[i] == '+')
      count_s2++;
    else if (s2[i] == '-')
      count_s2--;
    else
      q_marks++;
  }

  if ((q_marks == 0 and count_s1 != count_s2) or abs(count_s1 - count_s2) > q_marks)
  {
    cout << "0.000000000\n";
    return 0;
  }

  cout << fixed << setprecision(9) << (nCr(q_marks, (q_marks + abs(count_s1 - count_s2)) / 2) / (1 << q_marks)) << "\n";
}