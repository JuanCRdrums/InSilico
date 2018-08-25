#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,a,b,na,nb;
  while(cin >> n && n != 0)
  {
    na = 0;
    nb = 0;
    for(int i=0; i<n; i++)
    {
      cin >> a >> b;
      if(a > b)
      {
        na++;
      }
      else if(a < b)
      {
        nb ++;
      }
    }
    cout << na << " " << nb << endl;
  }
  return 0;
}
