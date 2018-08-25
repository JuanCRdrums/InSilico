#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159

int main(int argc, char const *argv[]) {
  double a,b,c;
  double atr,acr,atrap,acuad,arect;
  cin >> a >> b >> c;
  atr = (a*c)/2;
  acr = PI * pow(c,2);
  atrap = ((a+b)*c)/2;
  acuad = b*b;
  arect = a*b;
  cout << "TRIANGULO: " << fixed << setprecision(3) << atr << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << acr << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << atrap << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << acuad << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << arect << endl;
  return 0;
}
