#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<string, int> mem = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};

  int n, total{0};
  cin >> n;

  for (int i{0}; i < n; i++)
  {
    string s;

    cin >> s;

    total += mem[s];
  }

  cout << total << "\n";

  return 0;
}