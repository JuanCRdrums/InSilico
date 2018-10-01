#include <bits/stdc++.h>


using namespace std;

struct Edge{
  int u,v,weight;
  bool operator < (Edge const& other)
  {
    return weight < other.weight;
  }
};

int main(int argc, char const *argv[]) {
  int n=1,m=1;
  while(cin >> m >> n && n && m)
  {
    vector<Edge> v(n);
    vector<Edge> result;
    int costin = 0;
    for(int i = 0; i < n; i++) {cin >> v[i].u >> v[i].v >> v[i].weight; costin += v[i].weight;}
    sort(v.begin(),v.end());
    int tree_id[m];
    for(int i = 0; i < m; i++) tree_id[i] = i;
    int cost = 0;
    for(int i = 0; i < n; i++)
    {
      if(tree_id[v[i].u] != tree_id[v[i].v])
      {
        result.push_back(v[i]);
        cost += v[i].weight;
        int old_id = tree_id[v[i].u], new_id = tree_id[v[i].v];
        for(int j = 0; j < m; j++)
        {
          if(tree_id[j] == old_id) tree_id[j] = new_id;
        }
      }
    }

    int aho = costin - cost;
    cout << aho << endl;

  }
  return 0;
}
