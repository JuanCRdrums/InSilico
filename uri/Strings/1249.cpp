#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string read;
  while(getline(cin,read))
  {
    int size = read.size();
    for(int i = 0; i < size; i++)
    {
      char out;
      if(read[i] >= 'a' && read[i] <= 'z')
      {
        if(read[i] <= 'm')
        {
          out = read[i] + 13;
        }
        else
        {
          out = read[i] - 13;
        }
      }
      else if(read[i] >= 'A' && read[i] <= 'Z')
      {
        out = read[i] + 13;
        if(out > 'Z')
        {
          out = read[i] - 13;
        }
      }
      else
      {
        out = read[i];
      }

      cout << out;
    }
    cout << endl;
  }
  return 0;
}
