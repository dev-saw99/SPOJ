#include<vector>
#include<iostream>
using namespace std;

int main(){
  long N;cin>>N;
  while(N!=0){
    long int perm[N+1];
    for(long int i=1;i<=N;i++)
      {
	cin>>perm[i];
      }
    int flag = 0;
    for(long int i=1;i<=N;i++)
      {
	long int k = perm[i];
	if(perm[k]!=i){
	  flag=1;
	  break;
	}
      }
    if(flag!=0){
      cout<<"not ambiguous"<<endl;
    }
    else{
      cout<<"ambiguous"<<endl;
    }
    cin>>N;
  }
  
}
