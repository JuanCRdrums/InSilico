#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string name;
  double basico, ventas, total;
  cin >> name >> basico >> ventas;
  total = basico + ventas*0.15;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
  return 0;
}
