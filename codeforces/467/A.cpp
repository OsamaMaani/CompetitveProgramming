#include <iostream>

using namespace std;

int main()
{
  int x,y,z;
  int Count = 0;
  cin>>x;
  for(int i = 0 ; i <x;i++){
    cin>>y>>z;
    if(z-y>=2) Count++;

  }
  cout<<Count;
}
