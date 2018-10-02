#include <bits/stdc++.h>
using namespace std;
vector<int> parent,sizee;
struct Edge{
  int u,v,weight;
  bool operator < (Edge const& other)
  {
    return weight < other.weight;
  }
};

void make_set(int v)
{
  parent[v] = v;
  sizee[v] = 1;
}

int find_set(int v)
{
  if(v == parent[v]) return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
  a = find_set(a);
  b = find_set(b);
  if(a != b)
  {
    if(sizee[a] < sizee[b]) swap(a,b);
    parent[b] = a;
    sizee[a] += sizee[b];
  }
}

int main(int argc, char const *argv[]) {
  int n=1,m=1;
  while(cin >> m >> n && n && m)
  {
    vector<Edge> v(n);
    vector<Edge> result;
    parent.resize(m);
    sizee.resize(m);
    int costin = 0;
    for(int i = 0; i < n; i++) {cin >> v[i].u >> v[i].v >> v[i].weight; costin += v[i].weight;}
    sort(v.begin(),v.end());
    for(int i = 0; i < m; i++) make_set(i);
    int cost = 0;
    for(int i = 0; i < n; i++)
    {
      if(find_set(v[i].u) != find_set(v[i].v))
      {
        result.push_back(v[i]);
        cost += v[i].weight;
        union_sets(v[i].u,v[i].v);
      }
    }
    int aho = costin - cost;
    cout << aho << endl;

  }
  return 0;
}
