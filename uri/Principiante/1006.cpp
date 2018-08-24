#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  float A,B,C,p;
  cin >> A >> B >> C;
  p = (A*2 + B*3 + C*5) / 10;
  cout << "MEDIA = " << fixed << setprecision(1) << p << endl;
  return 0;
}
