#include <bits/stdc++.h>

using namespace std;

int inf = 10000000;

int minBlocks(int n,int m,vector<int> blocks)
{
  vector<int> solution(m+1,inf);
  solution[0] = 0;
  for(int j = 0; j < n; j++)
  {
    for(int i = blocks[j]; i <= m; i++)
    {
      solution[i] = min(solution[i],solution[i - blocks[j]] + 1);
    }
  }
  return solution[m];
}

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    int n,m;
    cin >> n >> m;
    vector<int> blocks(n);
    for(int j = 0; j < n; j++) cin >> blocks[j];
    cout << minBlocks(n,m,blocks) << endl;
  }
  return 0;
}
