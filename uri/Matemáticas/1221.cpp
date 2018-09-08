#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<long long int> criba(2147483648,0);
  criba[0] = 1;
  criba[1] = 0;
  criba[2] = 1;
  for(long long int i = 2; i < 46341; i++)
  {
    if(criba[i] = 1)
    {
      for(long long int j = i; j < 2147483648; j = i*j)
    }
  }
  return 0;
}
