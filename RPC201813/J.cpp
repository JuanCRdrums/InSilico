#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
  int n,q;
  cin >> n >> q;
  vector<vector<int> > g(n,vector<int>(2));
  for(int i = 0; i < n; i++)
  {
    cin >> g[i][0] >> g[i][1];
  }
  for(int i = 0; i < q; i++)
  {
    int x,y;
    cin >> x >> y;
    int min = 10000000;
    int d;
    for(int j = 0; j < n;j++)
    {
      d = max(abs(g[j][0] - x), abs(g[j][1] - y));
      if(d < min) min = d;
    }
    cout << min << endl;
  }
  return 0;
}
