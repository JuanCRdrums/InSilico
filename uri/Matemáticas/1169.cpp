#include <bits/stdc++.h>


using namespace std;

unsigned long long pow(int x,int y)
{
  unsigned long long r = x;
  if(y == 0)
  {
    return 1;
  }
  for(int i=1; i < y; i++)
  {
    r = r*x;
  }
  return r;
}

int main(int argc, char const *argv[]) {
  int n,x;
  cin >> n;
  for(int i = 0; i < n; i ++)
  {
    unsigned long long r,g;
    cin >> x;
    r = (pow(2,x)/12)/1000;
    if(x == 64)
    {
      cout << "1537228672809129 kg" << endl;
    }
    else
    {
        cout << r << " kg" << endl;
    }
  }
  return 0;
}
