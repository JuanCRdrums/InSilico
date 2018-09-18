#include <bits/stdc++.h>

using namespace std;

int search(vector<int> v, int n)
{
  int pos = -1;
  for(int i = 0; i < v.size(); i++)
  {
    if(v[i] == n)
    {
      pos = i;
      break;
    }
  }
  return pos;
}

int main(int argc, char const *argv[]) {
  int n=1,q=1;
  int cont = 1;
  while(cin >> n >> q && n != 0 && q != 0)
  {
    vector<int> c(n);
    for(int i = 0; i < n; i++)
    {
      cin >> c[i];
    }
    sort(c.begin(),c.end());
    cout << "CASE# " << cont << ":" << endl;
    cont ++;
    int x,y;
    for(int i = 0; i < q; i++)
    {
      cin >> x;
      y = search(c,x);
      if(y == -1)
      {
        cout << x << " not found" << endl;
      }
      else
      {
        cout << x << " found at " << y+1 << endl;
      }
    }
  }
  return 0;
}
