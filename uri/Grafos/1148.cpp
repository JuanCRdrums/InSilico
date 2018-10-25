#include <bits/stdc++.h>
using namespace std;

const long int INF = 100000000000000;


long int dijkstra(int s,int s2, vector<vector<long int> > adj)
{
  vector<long int> d,p;
  int n = adj.size();
  d.assign(n,INF);
  p.assign(n,-1);
  vector<bool> u(n,false);
  d[s] = 0;
  for(int i = 0; i < n; i++)
  {
    int v = -1;
    for(int j = 0; j < n; j++)
    {
      if(!u[j] && (v == -1 || d[j] < d[v])) v = j;
    }

    if(d[v] == INF) break;
    u[v] = true;

    for(int k = 0; k < adj[v].size(); k++)
    {
      if(adj[v][k] != INF)
      {
        int to = k;
        int len = adj[v][k];

        if(d[v] + len < d[to])
        {
          d[to] = d[v] + len;
          p[to] = v;
        }
      }
    }
  }
  return d[s2];
}

int main(int argc, char const *argv[]) {
  int n=1,e=1;
  while(cin >> n >> e && n && e)
  {
    vector<vector<long int> > adj(n,vector <long int>(n,INF));
    int x,y,h;
    for(int i = 0; i < e; i++)
    {
      cin >> x >> y >> h;
      adj[x-1][y-1] = h;
    }
    int k;
    cin >> k;
    int o,d;
    for(int i = 0; i < k; i++)
    {
      cin >> o >> d;
      long int r = dijkstra(o-1,d-1,adj);
      if(r == INF) cout << "Nao e possivel entregar a carta" << endl;
      else cout << r << endl;
      if(i == k-1) cout << endl;
    }
  }
  return 0;
}
