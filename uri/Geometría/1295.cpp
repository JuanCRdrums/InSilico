#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n && n != 0)
  {
    double m[n][2];
    for(int i = 0; i < n; i++)
    {
      cin >> m[i][0] >> m[i][1];
    }
    //vector<double> d(n*n,10000);
    //int k = 0;
    float dist;
    float menor = 10000;
    for(int i = 0; i < n; i++)
    {
      for(int j = i;j < n; j++)
      {
        if(i != j)
        {
          dist = sqrt((m[i][0]-m[j][0])*(m[i][0]-m[j][0]) + (m[i][1]-m[j][1])*(m[i][1]-m[j][1]));
          if(dist < menor)
          {
            menor = dist;
          }
        }
        //k++;
      }
    }
    if(menor == 10000)
    {
      cout << "INFINITY" << endl;
    }
    else
    {
      cout << fixed << setprecision(4) << menor << endl;
    }
    /*sort(d.begin(),d.end());
    if(d[0] == 10000)
    {
      cout << "INFINITY" << endl;
    }
    else
    {
      cout << fixed << setprecision(4) << d[0] << endl;
    }*/
  }
  return 0;
}
