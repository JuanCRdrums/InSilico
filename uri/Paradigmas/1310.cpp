#include <bits/stdc++.h>

using namespace std;

int maxProfit(int pdc,vector<int> rev, int n)
{
  int max = 0,profit = 0;
  for(int i = 0; i < n; i++)
  {
    profit = 0;
    for(int j = i; j < n; j++)
    {
      profit = profit + rev[j] - pdc;
      if(profit > max) max = profit;
    }
  }
  return max;
}

int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n)
  {
    int pdc;
    cin >> pdc;
    vector<int> rev(n);
    for(int i = 0; i < n; i++) cin >> rev[i];
    cout << maxProfit(pdc,rev,n) << endl;
  }
  return 0;
}
