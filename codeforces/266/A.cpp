#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;

  string s;
  cin>>s;
  int counter_r =0 , counter_g =0, counter_b =0;
  for(int i= 0;i<s.length()-1 ;i++){
    if(s[i] == 'R'&& s[i+1] == 'R'){
        counter_r += 1;
    }
    else if(s[i] == 'G' && s[i+1] == 'G'){
        counter_g += 1;
    }
    else if(s[i] == 'B' && s[i+1] == 'B'){
        counter_b+= 1;
    }

  }

  int res = counter_r + counter_g + counter_b;

  cout<<res<<endl;

    return 0;
}
