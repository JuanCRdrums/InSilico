#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int v[3];
  cin >> v[0] >> v[1] >> v[2];
  int *it;
  bool can = false;
  int n[3];
  n[0] = -v[0];
  n[1] = -v[1];
  n[2] = -v[2];
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      if(j != i)
      {
        int r = v[i] + n[j];
        if(r == 0)
        {
          can = true;
          break;
        }
        else
        {
          it = find(v,v+3,r);
          if(it != v+3)
          {
            can = true;
            break;
          }
          else
          {
            it = find(n,n+3,r);
            if(it != n+3)
            {
              can = true;
            }
          }
        }
      }
    }
  }

  if(can)
  {
    cout << "S" << endl;
  }
  else
  {
    cout << "N" << endl;
  }

  return 0;
}
