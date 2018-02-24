#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
bool isVowel(char d){

return d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='y';

}

int main()
{
    string x;

    cin>>x;

        for(int i =0 ; i<x.length();i++){
                char c = tolower(x[i]) ;
            if( ! isVowel(c)   ){

                cout << '.'<< (char)tolower(x[i]);
            }
        }


}
