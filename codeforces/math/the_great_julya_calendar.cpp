# include <bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

inline ull fast_mod(const ull &input, const ull &ceil) {
    // apply the modulo operator only when needed
    // (i.e. when the input is greater than the ceiling)
    return input >= ceil ? input % ceil : input;
    // NB: the assumption here is that the numbers are positive
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ull n, count{0};

  cin >> n;

  while (n)
  {
    ull aux = n, max{0}, next_val{0};
    while(aux)
    {
      next_val = fast_mod(aux, 10);

      if (next_val == 9)
      {
        max = next_val;
        break;
      }

      if (next_val > max)
        max = next_val;

      aux /= 10;
    }

    n -= max;
    ++count;
    continue;
  }

  cout << count << "\n";
  return 0;
}