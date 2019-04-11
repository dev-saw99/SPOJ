#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int count=0;
        int n,i=0;
        cin>>n;
        long long int A[n];
        while(i!=n){
            cin>>A[i];
            i++;
            }
        
        for(int i = 0 ; i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(A[i]>A[j]){count++;
                }
            }
        }
        cout<<count<<endl;
    }
}