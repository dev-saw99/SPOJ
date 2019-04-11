#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    long long int result ;
    vector<long long int> class1;
    vector<long long int> price1;
    int N;
    cin>>N;
    while(N!=0){
        result = 0 ;
        for(int i=0; i <N;i++){
            int cl;cin>>cl;
            class1.push_back(cl);
        }
        for(int i=0; i <N;i++){
            int pr;cin>>pr;
            price1.push_back(pr);
        }
        sort(class1.begin(),class1.end());
        sort(price1.begin(),price1.end());
        int i=0,j=N-1;
        while(i!=N){
            result+=price1[j]*class1[i];
            i++;j--;
        }
        cout<<result<<endl;
        class1.clear();
        price1.clear();
        cin>>N;
    }
}