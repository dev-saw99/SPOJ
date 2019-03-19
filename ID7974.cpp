#include<iostream>
using namespace std;

int checkAP(float A,float B,float C){
  if((B-A)==(C-B)){
    return 1;
  }
  return 0;
}

int main(){
  float A,B,C;
  cin>>A>>B>>C;

  while((A!=0)||(B!=0)||(C!=0)){

    if(checkAP(A,B,C)){
      float D = B-A;
      cout<<"AP "<<C+D<<endl;
    }
    else{
      float R=B/A;
      cout<<"GP "<<C*R<<endl;
      }
    cin>>A>>B>>C;
  }
  return 0;
}
