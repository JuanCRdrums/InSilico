#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  string read;
  for(int i = 0; i < n; i++)
  {
    cin >> read;
    int size = read.size();
    vector<char> a,b,c;
    bool fa = false,fb = false;
    for(int j = 0; j < size; j++)
    {
      bool wa = false,wb = false,wc = false;
      if(read[j] >= 48 && read[j] <= 57)
      {
        if((a.empty() || (b.empty() && c.empty())) && !fa)
        {
          wa = true;
          wb = false;
          wc = false;
        }
        if(((b.empty() || c.empty()) && !a.empty()) && fa && !fb)
        {
          wa = false;
          wb = true;
          wc = false;
        }
        if((c.empty() || (!a.empty() && !b.empty())) && fb && fa)
        {
          wa = false;
          wb = false;
          wc = true;
        }

        if(wa)
        {
          a.push_back(read[j]);
        }
        else if(wb)
        {
          b.push_back(read[j]);
        }
        else if(wc)
        {
          c.push_back(read[j]);
        }
      }
      else
      {
        if(!a.empty())
        {
          fa = true;
        }
        if(!b.empty())
        {
          fb = true;
        }
      }
    }

    int asize = a.size();
    int bsize = b.size();
    int csize = c.size();
    int na = 0, nb = 0, nc = 0;
    for(int j = 0; j < asize; j++)
    {
      na = na + pow(10,asize-j-1)*(a[j] - '0');
    }
    for(int j = 0; j < bsize; j++)
    {
      nb = nb + pow(10,bsize-j-1)*(b[j] - '0');
    }

    for(int j = 0; j < csize; j++)
    {
      nc = nc + pow(10,csize-j-1)*(c[j] - '0');
    }

    int r = na + nb + nc;
    cout << r << endl;

  }
  return 0;
}
