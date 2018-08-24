#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int empleado, horas;
  float pagoHora, pagoTotal;
  cin >> empleado >> horas >> pagoHora;
  pagoTotal = horas * pagoHora;
  cout << "NUMBER = " << empleado << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << pagoTotal << endl;
  return 0;
}
