#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n];


    int cnt_o=0;
    int cnt_z=0;
    int cnt_e=0;
    int cnt_r=0;
    int cnt_n=0;
    for(int i = 0 ; i<n ; i++){
        cin>>c[i];
            if(c[i] == 'z')
              cnt_z++;
            else if(c[i] == 'e')
              cnt_e++;
            else if(c[i] == 'r')
              cnt_r++;
            else if(c[i] == 'o')
              cnt_o++;
            else
               cnt_n++;
    }



    if(cnt_n!=0 ){
        for(int i = 0 ; i<cnt_n ; i++){
            cout<<"1 ";
        }
    }

    if(cnt_z != 0){
         for(int i = 0 ; i<cnt_z ; i++){
            cout<<"0 ";
        }

    }


    return 0;
}
