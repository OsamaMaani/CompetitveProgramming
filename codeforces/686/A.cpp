#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    long long  x,y,f;

    cin>>x;
    cin>>f;

    int z = 0 ;

    char c;
     for(int i = 0; i<x;i++){
        cin >>c>>y;
        if(c=='+') f=y+f;
        else {

            if(f>=y)f=f-y;
            else z++ ;
        }
     }
          cout << f <<" " <<z;
  }
