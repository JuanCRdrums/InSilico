#include <bits/stdc++.h>

using namespace std;

struct reindeer{
  string name;
  int weight;
  int age;
  float height;
};

bool compare(reindeer a, reindeer b)
{
  if(a.weight > b.weight)
  {
    return true;
  }
  else if(a.weight == b.weight)
  {
    if(a.age < b.age)
    {
      return true;
    }
    else if(a.age == b.age)
    {
      if(a.height < b.height)
      {
        return true;
      }
      else if(a.height == b.height)
      {
        if(a.height < b.height)
        {
          return true;
        }
        else if(a.name.compare(b.name) < 0)
        {
          return true;
        }
        else
        {
          return false;
        }
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

int main(int argc, char const *argv[]) {
  int t,n,m;
  cin >> t;
  for(int i = 1; i <= t; i++)
  {
    cin >> n >> m;
    vector<reindeer> reindeers;
    reindeer leido;
    for(int j = 0; j < n; j++)
    {
      cin >> leido.name >> leido.weight >> leido.age >> leido.height;
      reindeers.push_back(leido);
    }
    sort(reindeers.begin(),reindeers.end(),compare);
    int k = 1;
    cout << "CENARIO {" << i << "}" << endl;
    for(vector<reindeer>::iterator it = reindeers.begin(); it != reindeers.end(); it++)
    {
      if(k > m)
      {
        break;
      }
      cout << k << " - " << it->name << endl;
      k++;
    }
  }
  return 0;
}
