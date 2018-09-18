  #include <bits/stdc++.h>

  using namespace std;

  queue<int> digitos(unsigned long long n)
  {
    unsigned long long aux = n;
    queue<int> dig;
    while(aux != 0)
    {
      int d = aux % 10;
      dig.push(d);
      aux = aux / 10;
    }
    return dig;
  }

  int main(int argc, char const *argv[]) {
    int n;
    unsigned long long a,b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
      cin >> a >> b;
      queue<int> digmax = digitos(a);
      queue<int> digmin = digitos(b);
      bool ans = false;
      while(!digmin.empty())
      {
        if(digmin.front() == digmax.front())
        {
          digmin.pop();
          digmax.pop();
        }
        else
        {
          break;
        }
      }
      if(digmin.empty())
      {
        ans = true;
      }

      if(ans) cout << "encaixa" << endl;
      if(!ans) cout << "nao encaixa" << endl;
    }
    return 0;
  }
