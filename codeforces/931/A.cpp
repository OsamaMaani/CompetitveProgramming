#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b, ans = 0;
    cin >> a >> b;
    int dif = abs(a-b)/2;
    if(dif == 0)ans = 1;
    else{
        for(int i = 1;i<=dif;i++){
            ans+=i*2;
        }
        if(abs(a-b) % 2 != 0)ans += dif+1;
    }
    cout << ans;
}
