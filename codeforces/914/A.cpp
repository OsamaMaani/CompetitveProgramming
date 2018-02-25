#include <iostream>
#include <math.h>
using namespace std;
bool good( int x ){

    if(sqrt(x)!=(int)sqrt(x)) return 1 ;
    return 0 ;

}

int main()
{
    int x,res;
    cin>>x;
    int arr[x];

    for(int i = 0 ; i< x ; i++) cin >> arr[i] ;

    int ans = 10e9*-1 ;

    for(int i =0 ; i< x ; i++){

        if(arr[i]<0) {
            ans = max(ans , arr[i]) ;
            continue ;
        }

        if(good(arr[i])) ans = max(ans,arr[i]) ;


    }


    cout<< ans ;

    }
