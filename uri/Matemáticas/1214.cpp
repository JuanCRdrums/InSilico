#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int c,n,x;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> c;
    int n[c];
    int av = 0;
    int sum = 0;
    for(int j = 0; j < c; j++)
    {
      cin >> x;
      n[j] = x;
      sum = sum + x;
    }
    av = sum / c;
    int mayores = 0;
    for(int j = 0;j < c;j++)
    {
      if(n[j] > av)
      {
        mayores++;
      }
    }
    double porc = (mayores*100.0)/c;
    cout << fixed << setprecision(3) << porc << "%" << endl;
  }
  return 0;
}
