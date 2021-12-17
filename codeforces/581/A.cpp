#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a, b;
   cin>>a>>b;
   int res = min(a,b);
   cout<<res<< " ";

   int rest_of_days = abs(a-b) /2;

   cout<<rest_of_days<<endl;


    return 0;
}
