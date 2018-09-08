#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  float x;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> x;
    float y = x;
    int cont = 0;
    while(y > 1)
    {
      y = y*0.5;
      cont ++;
    }
    cout << cont << " dias" << endl;
  }
  return 0;
}
