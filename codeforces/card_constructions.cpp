# include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;
  long a[36518]{0};
  long count{0};
  
  a[1] = 2;
  for (long i{2}; i < 36518; i++)
    a[i] = (a[i - 1] + 3*(i - 1) + 2);

  for (int i{0}; i < 10; ++i)
    cout << a[i] << " ";

  cout << "\n";

  while(t--)
  {
    long n;
    cin >> n;

    if (n < 2)
      {
        cout << "0\n";
        continue;
      }
    long counter{0};
    
    long* pos = lower_bound(begin(a), begin(a) + 36518, n);
    counter += pos - begin(a) - 1;
    n -= *pos;
    
    cout << "*Pos: " << *pos << "\n";
    cout << "Pos: " << pos - begin(a) << "\n";
    cout << "N before: " << n + *pos << "\n";
    cout << "N after: " << n << "\n";


  }
  
  return 0;
}