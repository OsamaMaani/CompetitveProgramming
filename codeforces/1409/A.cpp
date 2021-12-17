#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int x, y;
        cin>>x>>y;

        int difference = abs(x-y);

        if(x == y){
            cout<<0<<endl;
        }else {
             int div = difference/10;
             int rem = difference%10;
             if(rem != 0){
                rem =1;
             }
             cout<<div+rem<<endl;
        }
    }

    return 0;
}
