#include <bits/stdc++.h>


using namespace std;

long long int hexToDec(string hex)
{
  int size = hex.size();
  reverse(hex.begin(),hex.end());
  long long int n = 0;
  long long int digit;
  for(int i = 0; i < size-2; i++)
  {
    if(hex[i] <= '9')
    {
      digit = hex[i] -  '0';
    }
    else
    {
      if(hex[i] == 'A' or hex[i] == 'a')
      {
        digit = 10;
      }
      if(hex[i] == 'B' or hex[i] == 'b')
      {
        digit = 11;
      }
      if(hex[i] == 'C' or hex[i] == 'c')
      {
        digit = 12;
      }
      if(hex[i] == 'D' or hex[i] == 'd')
      {
        digit = 13;
      }
      if(hex[i] == 'E' or hex[i] == 'e')
      {
        digit = 14;
      }
      if(hex[i] == 'F' or hex[i] == 'f')
      {
        digit = 15;
      }
    }

    n = n + digit*pow(16,i);

  }
  return n;
}

string decToHex(string dec)
{
  long int ndec = 0;
  reverse(dec.begin(),dec.end());
  for(int i = 0; i < dec.size(); i++)
  {
    ndec = ndec + (dec[i] - '0')*pow(10,i);
  }
  string hex;
  int toapp;
  while(true)
  {
    toapp = ndec % 16;
    if(toapp < 10)
    {
      hex.insert(0,1,toapp + 48);
    }
    else
    {
      if(toapp == 10)
      {
        hex.insert(0,"A");
      }
      if(toapp == 11)
      {
        hex.insert(0,"B");
      }
      if(toapp == 12)
      {
        hex.insert(0,"C");
      }
      if(toapp == 13)
      {
        hex.insert(0,"D");
      }
      if(toapp == 14)
      {
        hex.insert(0,"E");
      }
      if(toapp == 15)
      {
        hex.insert(0,"F");
      }
    }

    if(ndec <= 15)
    {
      break;
    }

    ndec = ndec / 16;

  }
  hex.insert(0,"x");
  hex.insert(0,"0");
  return hex;
}


int main(int argc, char const *argv[]) {
  string read;
  while(cin >> read && (long long int)atoi(read.c_str()) >= 0)
  {
    if(read[0] == '0' && read[1] == 'x')
    {
      cout << hexToDec(read) << endl;
    }
    else
    {
      cout << decToHex(read) << endl;
    }
  }
  return 0;
}
