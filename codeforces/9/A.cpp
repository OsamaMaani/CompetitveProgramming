#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a,b, numerator, dominerator = 6;

  cin>>a>>b;

  int res = max(a,b);

  numerator = (6-res)+1;

  while(dominerator%2 == 0 &&  numerator%2 == 0){

    numerator /= 2;
    dominerator /= 2;

  }

  while(dominerator % numerator == 0 && numerator != 1){
    int temp = numerator;
    numerator /= temp;
    dominerator /= temp;

  }

  cout<<numerator<<"/"<<dominerator;

    return 0;
}
