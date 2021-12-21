#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
   int arr[5][5];
   int row_index = 0;
   int col_index = 0;
   int steps = 0;
   for(int i = 0 ; i <5; i++){
    for(int j = 0 ; j<5; j++){
        cin>>arr[i][j];
        if(arr[i][j] == 1){
            row_index = i;
            col_index = j;
        }
    }
   }
   steps += abs(row_index -2);
   steps += abs(col_index -2);

   cout<<steps<<endl;

	return 0;
}
