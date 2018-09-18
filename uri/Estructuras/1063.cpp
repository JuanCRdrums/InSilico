#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  while(cin >> n && n != 0)
  {
    queue<char> a;
    vector<char> v(n);
    stack<char> b,st;
    bool posible = false;
    char in;
    for(int i = 0; i < n; i++)
    {
      cin >> in;
      a.push(in);
    }

    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
      if(!st.empty() && st.top() == v[i])
      {
        b.push(st.top());
        st.pop();
        cout << "R";
      }
      else
      {
        while(st.empty() || (st.top() != v[i] && !st.empty()))
        {
          if(!a.empty())
          {
            st.push(a.front());
            a.pop();
            cout << "I";
          }
          if(a.empty())
          {
            break;
          }
          //cout << st.top() << " " << v[i] << endl;
        }
        if(st.top() == v[i])
        {
          b.push(st.top());
          st.pop();
          cout << "R";
        }
        else
        {
          posible = false;
          break;
        }
      }
    }
    if(b.size() == v.size())
    {
      posible = true;
    }

    if(posible)
    {
      cout << endl;
    }
    else
    {
      cout << " Impossible" << endl;
    }
  }
  return 0;
}
