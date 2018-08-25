#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  string prev,curr;
  while(cin >> n)
  {
    vector<string> vec;
    for(int i = 0; i < n ; i++)
    {
      cin >> curr;
      int len = curr.size();
      vec.push_back(curr);
    }
    sort(vec.begin(),vec.end());
    int ahor = 0;
      for(int i = 0; i < n ; i++)
      {
        if(i != 0)
        {
          for(int j = 0; j < vec[i].size(); j++)
          {
            if(vec[i][j] == vec[i-1][j])
            {
              ahor++;
            }
            else
            {
              break;
            }
          }
        }
    }
    cout << ahor << endl;
  }
  return 0;
}
