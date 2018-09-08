#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int v,t;
  double a,x;
  while(cin >> v >> t)
  {
    if(t == 0)
    {
       a = 0;
    }
    else
    {
        a = 1.0*v/t;
    }
    x = 2*a*t*t;
    cout << x << endl;
  }
  return 0;
}
