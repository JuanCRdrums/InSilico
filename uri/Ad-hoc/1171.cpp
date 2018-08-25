#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,n1;
  cin >> n;
  map<int, int> m;
  for(int i = 0; i < n; i++)
  {
    cin >> n1;
    m[n1]++;
  }
  for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
  {
    cout << it -> first << " aparece " << it -> second << " vez(es)" << endl;
  }
  return 0;
}
