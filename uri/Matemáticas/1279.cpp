#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  unsigned long long y;
  while(cin >> y)
  {
    cout << y << endl;
    bool l = false,h = false,b = false;
    if((y%4 == 0 && y%100 != 0) || y % 400 == 0 ) l = true;
    if(y%15 == 0) h = true;
    if(y%55 == 0 && l) b = true;
    if(!l && !h && !b) cout << "This is an ordinary year." << endl;
    else
    {
      if(l) cout << "This is leap year." << endl;
      if(h) cout << "This is huluculu festival year." << endl;
      if(b) cout << "This is bulukulu festival year." << endl;
    }
    cout << endl;
  }
  return 0;
}
