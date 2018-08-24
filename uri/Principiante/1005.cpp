#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  double A,B,p;
  cin >> A >> B;
  p = (A*3.5 + B*7.5) / 11;
  cout << "MEDIA = " << fixed << setprecision(5) << p << endl;
  return 0;
}
