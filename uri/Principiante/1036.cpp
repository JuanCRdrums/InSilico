#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  float a,b,c,r1,r2;
  cin >> a >> b >> c;
  if(a == 0 || pow(b,2) - 4*a*c < 0)
  {
    cout << "Impossivel calcular" << endl;
  }
  else
  {
    r1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    r2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
    cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
  }
  return 0;
}
