#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int d,vf,vg;
  while(cin >> d >> vf >> vg)
  {
    bool can = false;
    if(vf < vg)
    {
      double t = sqrt((double)-d*d/(vf*vf - vg*vg));
      double dist = vf*t;
      if(dist <= 12)
      {
        can = true;
      }
    }
    if(can) cout << "S" << endl;
    else cout << "N" << endl;
  }
  return 0;
}
