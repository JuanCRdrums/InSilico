#include <bits/stdc++.h>

using namespace std;

struct shirt{
  string name;
  char size;
  string color;
};

bool compare(shirt a, shirt b)
{
  if(a.color.compare(b.color) == 0)
  {
    if(a.size == b.size)
    {
      if(a.name.compare(b.name) < 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else if((a.size == 'P' && b.size == 'M') || (a.size == 'P' && b.size == 'G') || (a.size == 'M' && b.size == 'G'))
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  else if(a.color.compare(b.color) < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(int argc, char const *argv[]) {
  int n=1;
  int cont = 0;
  while(cin >> n && n != 0)
  {
    if(cont != 0)
    {
      cout << endl;
    }
    cin.ignore();
    vector<shirt> v(n);
    for(int i = 0; i < n; i++)
    {
      shirt t;
      string read;
      getline(cin,t.name);
      cin >> t.color >> t.size;
      cin.ignore();
      v[i] = t;
    }
    sort(v.begin(),v.end(),compare);
    for(vector<shirt>::iterator it = v.begin(); it != v.end(); ++it)
    {
      cout << it->color << " " << it->size << " " << it->name << endl;
    }
    cont ++;
  }
  return 0;
}
