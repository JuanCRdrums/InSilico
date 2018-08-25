#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int a,b,c;
  char w;
  while(cin >> a >> b >> c)
  {
    if(a == b && b == c)
    {
      w = '*';
    }
    else if(a != b && b == c)
    {
      w = 'A';
    }
    else if(a != b && b != c)
    {
      w = 'B';
    }
    else if(a == b && b != c)
    {
      w = 'C';
    }

    cout << w << endl;

  }
  return 0;
}
