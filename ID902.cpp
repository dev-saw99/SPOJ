#include<iostream>
#include<math.h>
using namespace std;

int main(){
  float n;
  cin>>n;
  while(n!=0){
    int count=0;
    float m=1;
    float sum=0;
    while(sum<n){
      sum=sum+(1/++m);
      count++;
    }
    cout<<count<<" card(s)"<<endl;
    cin>>n;
  }
}

