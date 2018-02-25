#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int sum1,sum2,sum3,sum4;
int main()
{
    int x,y,z,d,total;

    cin >>x>>y>>z>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]- '0'==1) sum1+=x;
         else if(s[i]-'0'==2) sum2+=y;
          else if(s[i]-'0'==3) sum3+=z;
        else if (s[i]-'0'==4) sum4+=d;

    }
    total=sum1+sum2+sum3+sum4;
    cout<< total;
  }
