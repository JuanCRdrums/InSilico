#include <bits/stdc++.h>
using namespace std;

int toDex(string s)
{
  int n = 0;
  int p = 1;
  for(int i = s.size()-1; i >= 0; i--)
  {
    n += (s[i] - '0')*p;
    p = p*2;
  }
  return n;
}

int unos(int n)
{
  if(n == 0) return 0;
  int un = 1;
  while(n > 1)
  {
    if(n % 2 == 1) un++;
    n = n / 2;
  }
  return un;
}

int main(int argc, char const *argv[]) {
  int n,k;
  cin >> n >> k;
  int max = pow(2,n)-1;
  string sa;
  cin >> sa;
  int a = toDex(sa);
  int r = 0;
  for(int i = 0; i <= max; i++)
  {
    if(unos(a+i) == k) r++;
  }
  cout << r << endl;
  return 0;
}
