#include <bits/stdc++.h> 
using namespace std;

#define LL long long int
int main(){
    int T;
    cin>>T;
    while (T--)
    {   int flag=1;
        LL N;
        cin>>N;
        unordered_map<LL,LL > squares;
        for(LL i =0;i*i<=N;i++){
            squares[i*i]=1;
            if(squares.find(N-i*i)!=squares.end()){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        squares.clear();
    }
    
}