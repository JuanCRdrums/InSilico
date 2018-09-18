#include <bits/stdc++.h>

using namespace std;

struct product{
  string name;
  float price;
};


int main(int argc, char const *argv[]) {
  int n,m,p;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    float total = 0;
    cin >> m;
    product products[m];
    for(int j = 0; j < m; j++)
    {
      cin >> products[j].name >> products[j].price;
    }
    cin >> p;
    int cant;
    string name;
    for(int j = 0; j < p ; j++)
    {
      cin >> name >> cant;
      for(int k = 0; k < m; k++)
      {
        if(name == products[k].name)
        {
          total = total + cant*products[k].price;
        }
      }
    }
    cout << "R$ " << fixed << setprecision(2) << total << endl;
  }
  return 0;
}
