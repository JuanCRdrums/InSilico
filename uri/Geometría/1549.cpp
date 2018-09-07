#include <bits/stdc++.h>
#define PI acos(-1.0)

using namespace std;

const long double lim = 1e-9;


long double volume(long double r,long double R,long double h,long double H)
{
  long double rp = ((R-r)/H)*h + r;
  return (PI*h/3.0)*(rp*rp + r*r + rp*r);
}

long double binarySearch(long double obj,long double H,long double r,long double R)
{
  int it = 1000;
  long double h = H, a = lim;
  while(a - lim < h && it > 0)
  {
    long double mid = (a + h)*0.5;
    long double vMid = volume(r,R,mid,H);
    if(fabs(vMid - obj) < lim)
    {
      break;
    }

    if(vMid < obj)
    {
      a = mid;
    }
    else
    {
      h = mid;
    }
  }
  return a;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int c;
  long double obj,n,l,r,R,H;
  cin >> c;
  for(int i = 0; i < c; i++)
  {
    cin >> n >> l;
    cin >> r >> R >> H;
    obj = l/n;
    cout << fixed << setprecision(2) << binarySearch(obj,H,r,R) << endl;
  }
  return 0;
}
