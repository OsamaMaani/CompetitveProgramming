#include <iostream>
#include<bits/stdc++.h>


using namespace std;
 int init(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 }

  string NumberToString ( int Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }

int counter;
int main()
{
     init();
      string x ;
      cin>>x;
      if(x.length()<2){
        cout <<0;

        return 0;
      }
      int add=10;

     while(add>9){

        add=0;

        for(int i =0 ;i <x.length();i++){
            add+= (x[i]-'0');

        }

              x= NumberToString(add);
              counter++;

     }
      cout <<counter ;
}
