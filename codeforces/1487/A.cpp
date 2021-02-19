#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void init(){
cin.sync_with_stdio(0);
cin.tie(0);
}


int main()
{
  init();

  int t;
  cin>>t;
  while(t--){
    set<int> s;
    int n; cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size() == 1){
        cout<<0<<"\n";
    }else {
      sort(arr,arr+n);
      int temp = arr[0];
      int counter =0 ;
      for(int i = 0 ;i<n;i++){
        if(arr[i] == temp) counter++;
        else break;
      }
      int res = (sizeof(arr)/sizeof(arr[0])) - counter;
      cout<<res<<"\n";
    }
    s.clear();
  }

}
