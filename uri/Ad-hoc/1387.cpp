#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int l,r,c;
  while(cin >> l >> r)
  {
    if(l == 0 && r == 0)
    {
      break;
    }
    c = l + r;
    cout << c << endl;
  }
  return 0;
}
