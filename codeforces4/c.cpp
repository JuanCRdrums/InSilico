#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  map<string,int> v;
  for(int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if(v.size() == 0){v[s]++; cout << "OK" << endl;}
    else
    {
      map<string,int>::iterator p;
      p = find(v.begin(),v.end(),s);
      if(p == v.end()) {v[s]++; cout << "OK" << endl;}
      else
      {
        int j = 1;
        while(true)
        {
          char aux[2];
          sprintf(aux,"%d",j);
          string st = s + aux;
          p = find(v.end(),v.begin(),st);
          if(p == v.end())
          {
            v[st]++;
            cout << st << endl;
            break;
          }
          else j = j + 1;
        }
      }
    }
  }
  return 0;
}
