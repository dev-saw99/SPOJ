#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int T;cin>>T;
    while(T--){
    int flg=1;
    int N;cin>>N;
    vector<int> vil;
    vector<int> plr;
    for(int i=0;i<N;i++){
        int power;cin>>power;
        vil.push_back(power);
    }

    for(int i=0;i<N;i++){
        int power;cin>>power;
        plr.push_back(power);
    }
    sort(plr.begin(),plr.end());
    sort(vil.begin(),vil.end());
    for(int i = 0;i<N;i++){
        if(vil[i]<plr[i]){
            continue;
        }
        else{
            flg = 0;
            cout<<"LOSE"<<endl;
            break;
        }
        }
        if(flg==1){cout<<"WIN"<<endl;}
        plr.clear();
        vil.clear();
    }

    
}