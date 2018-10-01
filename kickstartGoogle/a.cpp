#include <bits/stdc++.h>


using namespace std;

struct gbus{
  int c1;
  int c2;
};

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cout << "Case #" << i+1 << ": ";
    int n;
    cin >> n;
    vector<gbus> v(n);
    for(int j = 0; j < n; j++)
    {
      cin >> v[j].c1 >> v[j].c2;
    }
    int p;
    cin >> p;
    for(int j = 0; j < p; j++)
    {
      int c;
      cin >> c;
      int cont = 0;
      for(int x = 0; x < p; x++)
      {
        cont = 0;
        for(int k = 0; k < n; k++)
        {
          if(c >= v[k].c1 && c <= v[k].c2) cont ++;
        }
      }
      if(j != p-1) cout << cont << " ";
      else cout << cont << endl;
    }
    string x;
    getline(cin,x);
  }
  return 0;
}
