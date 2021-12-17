#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    int sum = 0;
    for(int i = 0 ; i<n ;i ++){
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);

    int sumTwin = 0;
    int i=0;
    for(i = n-1 ; i >=0 ;i--){
        sumTwin += arr[i];
        if ( sumTwin > (sum-sumTwin) ){
            break;
        }
    }
    cout<<n-i;


    return 0;
}
