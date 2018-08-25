#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n && n != 0)
  {
    char d = 'N';
    string ins;
    cin >> ins;
    for(int i = 0; i < n; i++)
    {
      if(ins[i] == 'D')
      {
        if(d == 'N')
        {
          d = 'L';
        }
        else if(d == 'L')
        {
          d = 'S';
        }
        else if(d == 'S')
        {
          d = 'O';
        }
        else if(d == 'O')
        {
          d = 'N';
        }
      }
      else
      {
        if(d == 'N')
        {
          d = 'O';
        }
        else if(d == 'L')
        {
          d = 'N';
        }
        else if(d == 'S')
        {
          d = 'L';
        }
        else if(d == 'O')
        {
          d = 'S';
        }
      }
    }
    cout << d << endl;
  }
  return 0;
}
