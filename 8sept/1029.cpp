#include <bits/stdc++.h>

using namespace std;

int fibo(int n,int &l)
{
  if(n == 0)
  {
    l++;
    return 0;
  }
  else if(n == 1)
  {
    l++;
    return 1;
  }
  else
  {
    l++;
      return fibo(n-1,l) + fibo(n-2,l);
  }
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    int l = -1;
    int fib = fibo(x,l);
    cout << "fib(" << x << ") = " << l << " calls = " << fib << endl;
  }
  return 0;
}
