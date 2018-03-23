#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<< fixed<<setprecision(4);
   double h,m;
   cin>>h>>m;
   double H,D,C,N;
   cin>>H>>D>>C>>N;

   double det = (abs(20.0-(h+(m/60.0)))*60.0);
   double forEight= (ceil((H+(D*det))/N)*C)*80.0/100.0;
   double currentTime = ((ceil(H/N)*C));
   double currentTime1 = ((ceil(H/N)*C)*80.0/100);

   if(h>=20&&h<=23+(59/60)) cout <<currentTime1;
   else  cout <<min(forEight,currentTime);
}
