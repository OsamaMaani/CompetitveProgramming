#include <iostream>

using namespace std;

int main()
{
   int x,z,y,f;
   int Count =0;
   cin >> x;
   for(int i = 0 ; i < x;i++){

    cin >> z;
    cin >> y;
    cin >> f;
    if(f == 1 && y == 1||y==1&&z==1||z==1&&f==1||f==1&&y==1&&z==1) Count++;

   }
   cout << Count;



}
