#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;

  while(cin >> n && n != 0)
  {
    bool posible = false;
    queue<int> a;
    vector<int> v(n);
    int in;
    while(cin >> in && in != 0)
    {
      for(int i = 1; i <= n; i++)
      {
        a.push(i);
      }
      stack<int> st,b;
      v[0] = in;
      for(int i = 1; i < n; i++)
      {
        cin >> v[i];
      }
      for(int i = 0; i < n; i++)
      {
        if(!st.empty() && st.top() == v[i])
        {
          b.push(st.top());
          st.pop();
        }
        else
        {
          while(st.empty() || (st.top() != v[i] && !st.empty()))
          {
            if(!a.empty())
            {
              st.push(a.front());
              a.pop();
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
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }

    }
    cout << endl;
  }
  return 0;
}
