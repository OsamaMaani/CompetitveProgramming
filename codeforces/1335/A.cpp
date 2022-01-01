#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>> t;
    int n;
    while(t--){
        cin>>n;
        int res = n - ((n/2) +1);
        cout<<res<<endl;
    }
    return 0;
}
