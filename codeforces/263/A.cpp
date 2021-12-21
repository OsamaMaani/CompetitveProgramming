#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

   int arr[5][5];
   int sum =0;
   int row_index = 0;
   int column_index=0;
   for(int i =0 ; i<5; i++){
    for(int  j = 0; j<5; j++){
        cin>>arr[i][j];
    }
   }

   for(int i = 0 ; i<5; i++){
      for(int j = 0; j<5; j++){
         if(arr[i][j] == 1){
            row_index = i;
            column_index = j;
         }
      }
   }

   sum += abs(column_index - 2);
   sum += abs(row_index-2);

   cout<<sum;

	return 0;
}
