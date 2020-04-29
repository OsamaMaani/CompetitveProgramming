#include <iostream>
using namespace std;
 
int main() {
 
	int r1,r2,c1,c2,t1,t2,w,x,y,z ;
	cin>>r1>>r2>>c1>>c2>>t1>>t2 ;
 
	for(int i=1; i<=9; i++){
		w=i;       x=r1-w;
		if(x<=0 || x>9 || x==w){continue;}else{y=c1-w;
			if(y<=0 || y>9|| y==w || y==x || y!=t2-x){continue;}else{z=r2-y;
				if(z<=0 || z>9|| z==w || z==x || z==y || w+z!=t1 || x+z!=c2){continue;}
				else{cout<<w<<" "<<x<<"\n"<<y<<" "<<z ; return 0; }	
			}
		}
	}
 
	cout<<-1;
	return 0;
}