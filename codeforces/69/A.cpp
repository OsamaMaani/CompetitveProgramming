#include <iostream>

using namespace std;

int main()
{
  int x,y,z,f;
  int  sum=0,sum2=0,sum3=0;
  cin>>x;
  for(int i = 0;i<x;i++){
    cin>>y>>z>>f;
   sum+=y;
   sum2+=z;
   sum3+=f;
  }
  if(sum==0&&sum2==0&&sum3==0) cout<<"YES";
  else cout <<"NO";
}
