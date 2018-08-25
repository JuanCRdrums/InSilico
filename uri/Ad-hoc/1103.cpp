#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int h1,m1,h2,m2,r;
  while(cin >> h1 >> m1 >> h2 >> m2)
  {
    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
      break;

    if(h1 == h2)
    {
      if(m1 <= m2)
      {
        r = m2 - m1;
      }
      else
      {
        r = 60 - m1 + (24 - h1 - 1)*60 + h2*60 + m2;
      }
    }
    else if(h1 < h2)
    {
      r = 60 - m1 + (h2 - h1 - 1)*60 + m2;
    }
    else
    {
      r = 60 - m1 + (24 - h1 - 1)*60 + h2*60 + m2;
    }

    cout << r << endl;

  }
  return 0;
}
