#include <iostream>
using namespace std;

int main()
{
  int n,m;


  cin >>n>>m;
  char arr[n][m];

   for(int i=0 ;i<n;i++){

    for(int j=0;j<m;j++){

        cin>>arr[i][j];

    }
   }

  for(int i=0 ;i<n;i++){

    for(int j=0;j<m-1;j++){

        if(arr[i][j]!=arr[i][j+1]){
            cout << "NO" ;
            return 0;
        }
    }
    }

     for(int i=0 ;i<n;i++){

    for(int j=0;j<n;j++){



        if(arr[i][0]==arr[i+1][0]){
            cout << "NO" ;

            return 0;
        }
    }
    }


    cout <<"YES";


}

