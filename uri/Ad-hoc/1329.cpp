#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,r;
  while(cin >> n && n != 0)
  {
    map<int, int> j;
    for(int i = 0; i < n; i++)
    {
      cin >> r;
      j[r]++;
    }
    int mary = 0,john = 0;
    for(map<int, int>::iterator it = j.begin(); it != j.end(); ++it)
    {
      if(it -> first == 0)
      {
        mary = it -> second;
      }
      else
      {
        john = it -> second;
      }
    }
    cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
  }
  return 0;
}
