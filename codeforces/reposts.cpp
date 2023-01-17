#include <bits/stdc++.h>

using namespace std;

map<string, int> graph;

int main()
{
  short n;

  cin >> n;

  int max_size_chain = 0;
  graph["polycarp"] = 1;

  while (n--)
  {

    string name1, reposted, name2;

    cin >> name1 >> reposted >> name2;

    transform(name1.begin(), name1.end(), name1.begin(), ::tolower);
    transform(name2.begin(), name2.end(), name2.begin(), ::tolower);

    graph[name1] = graph[name2] + 1;

    max_size_chain = max(max_size_chain, graph[name1]);
  }

  cout << max_size_chain << "\n";

  return 0;
}