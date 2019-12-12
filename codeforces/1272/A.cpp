#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    long long a,b,c ;
    long long arr[3];
    long long arrh[3];
    cin>>q;
    long long res=0;
    while(q--){
        cin>>a>>b>>c;
        arr[0] =a;
        arrh[0] =a;
        arr[1]=b;
        arrh[1]=b;
        arr[2]=c;
        arrh[2]=c;
        sort(arrh,arrh+3);
        if(arrh[0]==arrh[2]) res =0;
        else {
            if(arr[0]==arr[1]&&arr[0]==arrh[2]){
                if(arr[2]+1==arr[1] || arr[0]-arr[2]==2) res =0;
                else {
                    arr[2]++;
                    arr[1]--;
                    arr[0]--;
                    res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
                }
            }else if(arr[0]==arr[1]&&arr[0]!=arrh[2]){
                if(arr[2]-1==arr[1] || arr[2]-arr[0]==2) res =0;
                else {
                    arr[2]--;
                    arr[1]++;
                    arr[0]++;
                    res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
                }
            }else if(arr[0]==arr[2]&&arr[0]==arrh[2]){
                if(arr[1]+1==arr[0] || arr[0]-arr[1]==2) res =0;
                else {
                    arr[1]++;
                    arr[2]--;
                    arr[0]--;
                    res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
                }
            }else if(arr[0]==arr[2]&&arr[0]!=arrh[2]){
                 if(arr[1]-1==arr[0] || arr[1]-arr[0]==2) res =0;
                else {
                    arr[1]--;
                    arr[2]++;
                    arr[0]++;
                    res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
                }
            }else if(arr[1]==arr[2]&&arr[1]==arrh[2]){
            if(arr[0]+1==arr[1] || arr[1]-arr[0]==2) res = 0;
            else {
                arr[2]--;
                arr[1]--;
                arr[0]++;
                res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }
            }else if(arr[1]==arr[2]&&arr[1]!=arrh[2]){
               if(arr[0]-1==arr[1] || arr[0]-arr[1]==2) res = 0;
                else{
                arr[2]++;
                arr[1]++;
                arr[0]--;
                res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
                }
            }else{

            if(arr[0]>arr[1]&&arr[1]>arr[2]){
                arr[0]--;
                arr[2]++;
                res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }else if(arr[0]>arr[2]&&arr[2]>arr[1]){
                arr[0]--;
                arr[1]++;
                res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }else if(arr[1]>arr[0]&&arr[0]>arr[2]){
                arr[1]--;
                arr[2]++;
                res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }else if(arr[1]>arr[2]&&arr[2]>arr[0]){
              arr[1]--;
              arr[0]++;
              res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }else if(arr[2]>arr[1]&&arr[1]>arr[0]){
                arr[2]--;
                arr[0]++;
             res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }else {
                     arr[2]--;
                     arr[1]++;
                    res =  abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]);
            }
            }
        }
        cout <<res<<"\n";
    }
}