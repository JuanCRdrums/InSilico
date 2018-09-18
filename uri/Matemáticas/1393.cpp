#include <bits/stdc++.h>


using namespace std;

/*int count(int n1, int n2)
{
  if(n2 == n1 + 2)
  {
    return 2;
  }
  else if(n2 == 1 || n2 == n1 + 1)
  {
    return 1;
  }
  else
  {
    return count(n1 + 1, n2) + count(n1 + 2,n2);
  }
}*/

int count(int n)
{
  int r = 0;
  for(int i = 0; i < n; i++)
  {
    if(n == 1 || n == i + 1)
    {
      r = r + 1;
      break;
    }
    r = r + 2;
  }
  return r;
}


int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n && n != 0)
  {
    cout << count(n) << endl;
  }
  return 0;
}
