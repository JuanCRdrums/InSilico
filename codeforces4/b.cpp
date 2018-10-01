#include <bits/stdc++.h>

using namespace std;

struct day{
  int mi,ma;
}

int main(int argc, char const *argv[]) {
  int d, sumTime;
  cin >> d >> sumTime;
  vector<day> v(d);
  for(int i = 0; i < d; i++) cin >> v[i].mi >> v[i].ma;
  vector<int> solution(d);
  for(int i = 0; i < d; i++)
  {
    solution[i] = v[i].mi;
  }
  int t = 0;
  bool can = false;
  while(true)
  {
    t = 0;
    for(int i = 0; i < d; i++)
    {
      t += solution[i];
    }
    if(t == sumTime)
    {
      can = true;
      break;
    }
    else
    {
      for()
    }
  }
  return 0;
}
