#include <bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[]) {
  int n = 1;
  int cas = 1;
  while(cin >> n && n != 0)
  {
    map <int,int> m;
    if(cas != 1) cout << endl;
    cout << "Cidade# " << cas << ":" << endl;
    cas++;
    double prom = 0;
    int p = 0;
    for(int i = 0; i < n; i++)
    {
      int res,cons;
      cin >> res >> cons;
      prom = prom + cons;
      p += res;
      int cpr = floor(cons/res);
      m[cpr] += res;
    }
    prom = (double)prom / p;
    for(map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
      cout << it->second << "-" << it->first << " ";
    cout << endl;
    prom = floor(100*prom)/100;
    cout << "Consumo medio: " << fixed << setprecision(2) << prom << " m3." << endl;
  }
  return 0;
}
