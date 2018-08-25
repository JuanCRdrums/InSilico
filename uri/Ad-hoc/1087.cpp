#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int x1,y1,x2,y2,m;
  while(cin >> x1 >> y1 >> x2 >> y2 && x1 != 0 && x2 != 0 && y1 != 0 && x2 != 0)
  {
    if(x1 == x2 && y1 == y2)
    {
      m = 0;
    }
    else if(x1 == x2 || y1 == y2 || x1+y1 == x2+y2 || x1-y1 == x2-y2)
    {
      m = 1;
    }
    else
    {
      m = 2;
    }
    cout << m << endl;
  }
  return 0;
}
