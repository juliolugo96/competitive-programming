# include <bits/stdc++.h>

using namespace std;


static long long a[36518]{0};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;

  cin >> t;
  long long count{0};
  
  a[1] = 2;
  for (int i{2}; i < 36518; i++)
    a[i] = (a[i - 1] + 3*(i - 1) + 2);

  // for (int i{0}; i < 10; ++i)
  //   cout << a[i] << " ";

  // cout << "\n";



  map<long long, long long> mem;

  while(t--)
  {
    long long n;
    cin >> n;

    if (n < 2)
      {
        cout << "0\n";
        continue;
      }

    if (mem[n])
    {
      cout << mem[n] << "\n";
      continue;
    }


    long long counter{0}, og_n{n};
    
    while(n >= 2)
    {
      long long* pos = lower_bound(begin(a), begin(a) + 36518, n);
      n -= a[pos - begin(a)] <= n ? *pos : *(pos - 1);

      counter++;

      // cout << "*Pos: " << *pos << "\n";
      // cout << "Pos: " << pos - begin(a) << "\n";
      // cout << "N before: " << n + *pos << "\n";
      // cout << "N after: " << n << "\n";
    }
    
    mem[og_n] = counter;
    cout << counter << "\n";

  }
  
  return 0;
}