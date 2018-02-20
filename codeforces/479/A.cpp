#include <iostream>

using namespace std;

int main()
{int x,y,z;
  cin>>x>>y>>z;

  if(x==1&&z==1) cout <<  x+y+z;
  else if(x == 1 || (y == 1 && x < z)) cout<< (x+y)*z;
  else if(z == 1 || (y == 1 && x >= z)) cout<< x*(y+z);
  else cout<< x*y*z;
}