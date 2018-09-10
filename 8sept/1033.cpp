#include <bits/stdc++.h>

using namespace std;

vector<vector<unsigned long long> > multmat(vector<vector<unsigned long long> > m1, vector<vector<unsigned long long> > m2, unsigned long long b)
{
  vector<vector<unsigned long long> > r(3,vector<unsigned long long>(3,0));
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      for(int k = 0; k < 3; k++)
      {
        r[i][j] = (r[i][j] + ((m1[i][k]%b)*(m2[k][j]%b))%b)%b;
      }
    }
  }
  return r;
}


vector<vector<unsigned long long> > pot(vector<vector<unsigned long long> > m1, unsigned long long n, unsigned long long b)
{
  vector <vector<unsigned long long> > r(3,vector<unsigned long long>(3,1));
  while(n > 0)
  {
    if(n % 2 != 0)
    {
      r = multmat(r,m1,b);
    }
    m1 = multmat(m1,m1,b);
    n = n/2;
  }
  return r;
  /*if(n == 0)
  {
    vector <vector<unsigned long long> > r(3,vector<unsigned long long>(3,1));
    return r;
  }
  if(n == 1)
  {
    return m1;
  }
  vector<vector<unsigned long long> > aux;
  vector<vector<unsigned long long> > aux2;
  aux = pot(m1,n/2,b);
  if(n % 2 == 0)
  {
    aux2 = multmat(aux,aux,b);
    return multmat(aux2,m1,b);
  }
  else
  {
      return multmat(aux,aux,b);
  }*/
}


int main(int argc, char const *argv[]) {
  unsigned long long n,b,cont = 1;
  while(cin >> n >> b)
  {
    if(n == 0 && b == 0)
    {
      break;
    }
    vector<vector<unsigned long long> > m(3,vector<unsigned long long>(3,1));
    m[1][1] = 0;
    m[1][2] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    //cout << "holi" << endl;
    //cout << r[0][0] << endl;
    unsigned long long res = 0;
    if(n == 0 || n == 1)
    {
      res = 1;
    }
    else
    {
      vector<vector<unsigned long long> > r;
      r = pot(m,n-2,b);
      res = (r[0][0]%b + r[0][1]%b + r[0][2]%b)%b;
      //res = r[0][0];
    }
    cout << "Case " << cont << ": " << n << " " << b << " " << res << endl;
    cont++;
  }
  return 0;
}
