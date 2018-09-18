#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
  if(b == 0) return a;
  else return fabs(gcd(b,a%b));
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int na,da,nb,db;
    char slash,op;
    cin >> na >> slash >> da >> op >> nb >> slash >> db;
    int nr,dr;
    if(op == '+')
    {
      nr = na*db + nb*da;
      dr = da*db;
    }
    if(op == '-')
    {
      nr = na*db - nb*da;
      dr = da*db;
    }
    if(op == '*')
    {
      nr = na*nb;
      dr = da*db;
    }
    if(op == '/')
    {
      nr = na*db;
      dr = da*nb;
    }
    int mcd = gcd(nr,dr);
    int nsim = nr/mcd;
    int dsim = dr/mcd;
    cout << nr << "/" << dr << " = " << nsim << "/" << dsim << endl;
  }
  return 0;
}
