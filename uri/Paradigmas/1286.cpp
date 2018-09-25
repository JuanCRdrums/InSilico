#include <bits/stdc++.h>

using namespace std;


struct order{
  long long p;
  long long t;
};

long long dp[50][50];

long long maxTime(int n, int p, vector<order> v,int x)
{
  if(n == x) return 0;
  if(dp[x][p] != -1) return dp[x][p];
  long long mt = maxTime(n,p,v,x+1);
  if(v[x].p <= p)
  {
    mt = max(mt,maxTime(n,p - v[x].p,v,x+1) + v[x].t);
  }
  dp[x][p] = mt;
  return dp[x][p];
}

int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n && n != 0)
  {
    int p;
    cin >> p;
    vector<order> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].t >> v[i].p;
    memset(dp,-1,sizeof dp);
    cout << maxTime(n,p,v,0) << " min." << endl;
  }
  return 0;
}
