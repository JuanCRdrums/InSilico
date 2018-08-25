#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int cod1,cod2,n1,n2;
  float v1,v2,total;
  cin >> cod1 >> n1 >> v1;
  cin >> cod2 >> n2 >> v2;
  total = v1*n1 + v2*n2;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
  return 0;
}
