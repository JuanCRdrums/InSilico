#include <bits/stdc++.h>

using namespace std;

bool compare(int i,int j){ return (i > j); }

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  for(int i = 0; i <= n; i++)
  {
    map<char,int> m;
    string read;
    getline(cin,read);
    if(i != 0)
    {
      int j = 0;
      while(read[j])
      {
        if((read[j] >= 'A' && read[j] <= 'Z') || (read[j] >= 'a' && read[j] <= 'z') )
        {
          m[tolower(read[j])]++;
        }
        j++;
      }
      vector<int> values;
      for(map<char,int>::iterator it = m.begin(); it != m.end(); ++it)
      {
        values.push_back(it -> second);
      }
      sort(values.begin(),values.end(),compare);
      for(map<char,int>::iterator it = m.begin(); it != m.end(); ++it)
      {
        if(it -> second == values[0])
        {
          cout << it -> first;
        }
      }
      cout << endl;
    }


  }
  return 0;
}
