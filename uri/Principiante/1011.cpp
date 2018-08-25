#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159

int main(int argc, char const *argv[]) {
  int r;
  double volume;
  cin >> r;
  volume = (4.0/3)*PI*pow(r,3);
  cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
  return 0;
}
