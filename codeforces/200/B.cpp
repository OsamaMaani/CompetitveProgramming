#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int vol;
    double dominerator = 0;
    double numerator = 0;
    for(int i = 0 ; i<x; i++){
        cin>>vol;
        dominerator +=100;
        numerator += vol;
    }

    double res = numerator / dominerator;

    cout<<res*100<<endl;
    return 0;
}
