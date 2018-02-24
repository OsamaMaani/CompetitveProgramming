#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long n,m,a,res;
   cin >>n;
   cin >>m;
   cin >>a;
   res = ceil(n / (double) a) * ceil (m / (double) a);
     cout << fixed <<res;

}
