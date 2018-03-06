#include <iostream>
using namespace std;

int main()
{
    int j;
   int arr[6];
   int sum=0,score,f,sum1;

   for(int i = 0 ;i<6;i++ ){

    cin>>arr[i];
    sum +=arr[i];
        }
   if(sum %2==1 ) {
    cout <<"NO";
    return 0;

   }
   score = sum/2;

   for(int i=0;i<6;i++){

    for(int k =i+1;k<6;k++ ){
         for(int j=k+1;j<6;j++){
            if(arr[i]+arr[k]+arr[j]==score){
                    cout <<"YES";
                      goto here;

            }



         }

    }
   }
   cout << "NO";
   here:;

}
