#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main(int argc, char const *argv[]) {
  long double f,l;
  while(cin >> f)
  {
    //l = f*((1/cos(9.0*PI/180.0)) + tan(9.0*PI/180.0)*tan(9.0*PI/180.0));
    l = f*sin(108*PI/180)/sin(63*PI/180);
    cout << fixed << setprecision(10) << l << endl;
  }
  return 0;
}
