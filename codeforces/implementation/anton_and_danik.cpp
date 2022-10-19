# include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n;
  cin >> n;

  string s;
  cin >> s;

  string::difference_type d = count(s.begin(), s.end(), 'D');
  string::difference_type a = count(s.begin(), s.end(), 'A');

  if (a == d){
    cout << "Friendship\n";
    return 0;
  }

  cout << (a > d ? "Anton\n": "Danik\n");

  return 0;
}