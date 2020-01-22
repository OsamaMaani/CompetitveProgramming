#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,n;
    int sum =0;
    int arr[3];
    cin>>t;
    while(t--){
      cin>>a>>b>>c>>n;
      arr[0] =a; arr[1]=b; arr[2]=c;
      sort(arr,arr+3);
      sum = (arr[2] - arr[1]) + (arr[2]-arr[0]);
      if(sum==n || sum<n && (n-sum)%3==0) cout<<"YES"<<"\n";
      else cout<<"NO"<<"\n";
    }
}
