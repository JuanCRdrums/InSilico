#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[]) {
  int n,f1,f2;
  cin >> n;
  for(int i=0; i < n; i++)
  {
    int mcd = 1;
    cin >> f1 >> f2;
    int aux1 = f1;
    int aux2 = f2;
    while(aux2 > 0)
    {
      mcd = aux2;
      aux2 = aux1 % aux2;
      aux1 = mcd;
    }
    cout << mcd << endl;
  }
  return 0;
}
