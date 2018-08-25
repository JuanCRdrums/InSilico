#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,r,n100,n50,n20,n10,n5,n2,n1;
  cin >> n;
  n100 = n / 100;
  r = n - n100 * 100;
  n50 = r / 50;
  r = r - n50*50;
  n20 = r / 20;
  r = r - n20*20;
  n10 = r / 10;
  r = r - n10*10;
  n5 = r / 5;
  r = r - n5*5;
  n2 = r / 2;
  r = r - n2*2;
  n1 = r;

  cout << n << endl;
  cout << n100 << " nota(s) de R$ 100,00" << endl;
  cout << n50 << " nota(s) de R$ 50,00" << endl;
  cout << n20 << " nota(s) de R$ 20,00" << endl;
  cout << n10 << " nota(s) de R$ 10,00" << endl;
  cout << n5 << " nota(s) de R$ 5,00" << endl;
  cout << n2 << " nota(s) de R$ 2,00" << endl;
  cout << n1 << " nota(s) de R$ 1,00" << endl;

  return 0;
}
