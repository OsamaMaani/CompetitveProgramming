#include <iostream>
using namespace std;
int countera,counterd;
 int main(){
      int n ;
      cin >>n;
      for(int i = 0 ; i<n;i++){
          char c;
          cin >>c;
          if(c=='A') countera++;
          else counterd++;
          
          
      }
      if(countera>counterd) cout<<"Anton";
      else if(countera==counterd) cout <<"Friendship";
      else cout <<"Danik";
      
 }