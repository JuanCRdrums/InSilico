#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int n,h,m,s,r;
  cin >> n;
  h = n/3600;
  r = n - h*3600;
  m = r/60;
  r = r - m*60;
  s = r;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}
