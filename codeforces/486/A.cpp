#include <iostream>

using namespace std;

int main()
{
   long long x,sum=0;
   cin >> x ;
   if(x%2==0) sum = x/2;
   else  sum=x/2-x;

   cout<<sum;
}
