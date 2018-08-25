#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  float n,r;
  int b100, b50, b20, b10, b5, b2;
  int m1, m50, m25, m10, m05, m01;
  cin >> n;
  b100 = n / 100;
  r = n - b100*100;
  b50 = r / 50;
  r = r - b50*50;
  b20 = r / 20;
  r = r - b20*20;
  b10 = r / 10;
  r = r - b10*10;
  b5 = r / 5;
  r = r - b5*5;
  b2 = r / 2;
  r = r - b2*2;

  m1 = floor(r);
  r = r - m1;
  m50 = floor(r/0.5);
  r = r - m50*0.5;
  m25 = floor(r/0.25);
  r = r - m25*0.25;
  m10 = floor(r/0.10);
  r = r - m10*0.10;
  m05 = floor(r/0.05);
  r = r - m05*0.05;
  m01 = rint(r/0.01);

  cout << "NOTAS:" << endl;
  cout << b100 << " nota(s) de R$ 100.00" << endl;
  cout << b50 << " nota(s) de R$ 50.00" << endl;
  cout << b20 << " nota(s) de R$ 20.00" << endl;
  cout << b10 << " nota(s) de R$ 10.00" << endl;
  cout << b5 << " nota(s) de R$ 5.00" << endl;
  cout << b2 << " nota(s) de R$ 2.00" << endl;

  cout << "MOEDAS:" << endl;
  cout << m1 << " moeda(s) de R$ 1.00" << endl;
  cout << m50 << " moeda(s) de R$ 0.50" << endl;
  cout << m25 << " moeda(s) de R$ 0.25" << endl;
  cout << m10 << " moeda(s) de R$ 0.10" << endl;
  cout << m05 << " moeda(s) de R$ 0.05" << endl;
  cout << m01 << " moeda(s) de R$ 0.01" << endl;

  return 0;
}
