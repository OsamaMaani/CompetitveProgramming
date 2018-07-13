#include <iostream>

using namespace std;

int main()
{
    string word;
    cin>>word;
    char a ='a',e ='e',ii='i',o ='o',u = 'u', n = 'n';

    for(int i =0 ; i<word.length();i++){
        int j=    word[i];
          int k =word[i+1];

            if(j==n) {


            }else {
        if(j!=a&&j!=e&&j!=ii&&j!=o&&j!=u){
        if(k!=a&&k!=e&&k!=ii&&k!=o&&k!=u)
            {
                cout<<"NO";
                return 0;
            }

         }
            }

    }

    cout <<"YES";

}
