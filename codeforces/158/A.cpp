#include <iostream>

using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;
    int arr[n];
    int res = 0;
    for(int i = 0; i<n ;i++){
     cin>>arr[i];
    }
    int  kth_place = arr[k-1];
    
    for(int i = 0 ;i<n; i++){
        if(arr[i]>= kth_place && arr[i] != 0)
            res++;
    }
    cout<<res<<endl;

    return 0;
}
