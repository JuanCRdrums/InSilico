#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int a,b,c,m1,m2;
  cin >> a >> b >> c;
  m1 = (a + b + abs(a - b)) / 2;
  m2 = (m1 + c + abs(m1 - c)) / 2;
  cout << m2 << " eh o maior" << endl;
  return 0;
}
