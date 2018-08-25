#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,id,i,j,cont;
  while(cin >> n >> id)
  {
    cont = 0;
    for(int k = 0; k < n; k++)
    {
      cin >> i >> j;
      if(id == i && j == 0)
      {
        cont++;
      }
    }
    cout << cont << endl;
  }
  return 0;
}
