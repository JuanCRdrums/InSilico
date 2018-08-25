#include <bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[]) {
  unsigned int a,b,r;
  while(cin >> a >> b)
  {
    r = (~a & b) | (a & ~b);
    int carry = a & b;
    cout << r << endl;
  }
  return 0;
}
