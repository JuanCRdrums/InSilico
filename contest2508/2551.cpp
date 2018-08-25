#include <bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[]) {
  int n,t,d;
  float promd;
  while(cin >> n)
  {
    vector<float> p;
    vector<int> r;
    for(int i = 1;i <= n; i++)
    {
      cin >> t >> d;
      promd = float(d)/t;
      sort(p.begin(),p.end());
      if(i == 1)
      {
        r.push_back(i);
      }
      else
      {
        if(promd > p.back())
        {
          r.push_back(i);
        }
      }
      p.push_back(promd);
    }
    for(vector<int>::iterator it = r.begin(); it != r.end(); ++it)
    {
      cout << *it << endl;
    }
  }
  return 0;
}
