#include<iostream>
using namespace std;
int main(){
  int N;cin>>N;          //No of test cases
  while(N!=0){
    N--;
    int A,B;
    cin>>A>>B;
    if((A-B)==0||(A-B)==2){
      if(A%2==0){cout<<A+B<<endl;}
      else{cout<<A+B-1<<endl;}
    }
    else{cout<<"No Number"<<endl;}
  }
}
