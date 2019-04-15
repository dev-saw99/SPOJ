#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main(){
    LL n;
    cin>>n;
    while(n!=-1){
        LL i;
        for( i = 0;i<=n/6;i++ ){
            if(((3*i*(i+1))+1) == n){
                cout<<"Y"<<endl;break;}
        }
        if(i==n/6+1){
            cout<<"N"<<endl;}
        cin>>n;
        }
}