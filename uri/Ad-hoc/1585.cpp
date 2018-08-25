#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,x,y,a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    a = (x*y)/2;
    cout << a << " cm2" << endl;
  }
  return 0;
}
