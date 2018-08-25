#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, a, m, d, r;
  cin >> n;
  a = n / 365;
  r = n - a*365;
  m = r / 30;
  r = r - m*30;
  d = r;
  cout << a << " ano(s)" << endl;
  cout << m << " mes(es)" << endl;
  cout << d << " dia(s)" << endl;
  return 0;
}
