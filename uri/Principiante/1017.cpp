#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int t,v;
  float l,d;
  cin >> t >> v;
  d = t * v;
  l = d / 12;
  cout << fixed << setprecision(3) << l << endl;
  return 0;
}
