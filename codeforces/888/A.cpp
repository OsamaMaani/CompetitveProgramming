#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int x;
   cin >> x;
        vector<int> y(x);
        for(int i = 0 ; i <x;i++){
            cin >> y[i];

        }
        int m=0;
        for(int i = 1 ; i<x-1;i++){
        if(y[i]>y[i+1] && y[i]>y[i-1]){
            m = m + 1;
        }else if(y[i]<y[i+1] && y[i]<y[i-1]){
            m = m +1;
        }else{

        }

        }
        cout<<  m;

    return 0;
}
