#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[]) {
  int c,goals;
  char m,s;
  cin >> c;
  for(int i = 0; i < c; i++)
  {
    cin >> goals;
    int gr = 0;
    int gg = 0;
    int gb = 0;
    int cr = 0;
    int cg = 0;
    int cb = 0;
    for(int j = 0; j < goals; j++)
    {
      cin >> m >> s;
      if(m == 'R')
      {
        cr ++;
        if(s == 'G')
        {
          gr += 2;
        }
        if(s == 'B')
        {
          gr++;
        }
      }
      if(m == 'G')
      {
        cg++;
        if(s == 'B')
        {
          gg += 2;
        }
        if(s == 'R')
        {
          gg++;
        }
      }
      if(m == 'B')
      {
        cb ++;
        if(s == 'R')
        {
          gb += 2;
        }
        if(s == 'G')
        {
          gb++;
        }
      }
    }
    if(gr == gg && gg == gb)
    {
      cout << "trempate" << endl;
    }
    else if(gr == gg && gr > gb && cr > cb && cg > cb && cr == cg|| gr == gb && gr > gg && cr > cg && cb > cg && cr == cb || gg == gb && gg > gr && cg > cr && cb > cr && cg == cb)
    {
      cout << "empate" << endl;
    }
    else
    {
      if(gr > gg && gr >= gb)
      {
        cout << "red" << endl;
      }
      else if(gg > gr && gg >= gb)
      {
        cout << "green" << endl;
      }
      else
      {
        cout << "blue" << endl;
      }
    }
  }
  return 0;
}
