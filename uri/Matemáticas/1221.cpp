#include <bits/stdc++.h>

using namespace std;

bool primo(unsigned long long n)
{
  if(n == 2)
  {
    return true;
  }
  unsigned long long r = floor(sqrt(n));
  for(unsigned long long i = 2; i <= r; i++)
  {
    if(n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    unsigned long long x;
    cin >> x;
    if(primo(x))
    {
      cout << "Prime" << endl;
    }
    else
    {
      cout << "Not Prime" << endl;
    }
  }
  return 0;
}
