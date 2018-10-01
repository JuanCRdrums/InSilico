#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    int e,n;
    cin >> e >> n;
    vector<long long> r(n);
    for(int j = 0; j < n; j++) cin >> r[j];
    sort(r.begin(),r.end());
    int h = 0;
    int a = 0, b = n-1;
    while(a != b)
    {
      if(e > r[a])
      {
        e -= r[a];
        a++;
        h++;
      }
      else if(h > 1)
      {
        e += r[b];
        b--;
        h--;
      }
      else b--;
    }
    cout << "Case #" << i+1 << ": " << h << endl;
  }
  return 0;
}
