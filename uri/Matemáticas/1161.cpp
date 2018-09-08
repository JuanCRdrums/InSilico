#include <bits/stdc++.h>


using namespace std;


unsigned long long fact(int n)
{
  unsigned long long fact = 1;
  if(n == 0)
  {
    return 1;
  }
  for(int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main(int argc, char const *argv[]) {
  int m,n;
  unsigned long long f1,f2,r;
  while(cin >> m >> n)
  {
    f1 = fact(m);
    f2 = fact(n);
    r = f1 + f2;
    cout << r << endl;
  }
  return 0;
}
