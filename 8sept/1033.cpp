#include <bits/stdc++.h>

using namespace std;

void multmat(long long int m1[3][3], long long int m2[3][3], long long int r[3][3], long long int b)
{
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      r[i][j] = 0;
      for(int k = 0; k < 3; k++)
      {
        r[i][j] = (r[i][j] + ((m1[i][k]%b)*(m2[k][j]%b)%b))%b;
      }
    }
  }
}


void pow(long long int m1[3][3], long long int n, long long int r[3][3], long long int b)
{
  if(n == 1)
  {
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        r[i][j] = m1[i][j];
      }
    }
    return;
  }
  long long int aux[3][3];
  if(n % 2 == 0)
  {
    pow(m1,n/2,aux,b);
    multmat(aux,aux,r,b);
    return;
  }
    pow(m1,n-1,aux,b);
    multmat(aux,m1,r,b);
}


int main(int argc, char const *argv[]) {
  unsigned long long n,b,cont = 1;
  while(cin >> n >> b)
  {
    if(n == 0 && b == 0)
    {
      break;
    }
    long long int r[3][3];
    long long int m[3][3];
    m[0][0] = 1;
    m[0][1] = 1;
    m[0][2] = 1;
    m[1][0] = 1;
    m[1][1] = 0;
    m[1][2] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    //cout << r[0][0] << endl;
    long long int res;
    if(n == 0 || n == 1)
    {
      res = 1;
    }
    else
    {
      pow(m,n-1,r,b);
      res = r[0][0]%b + r[0][1]%b + r[0][2]%b;
    }
    cout << "Case " << cont << ": " << n << " " << b << " " << res << endl;
    cont++;
  }
  return 0;
}
