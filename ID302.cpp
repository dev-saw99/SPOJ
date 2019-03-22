#include<iostream>
using namespace std;

int main(){
  int T;cin>>T;
  while(T!=0){

    int count,i,N;
    cin>>N;
    count=N;
    i=0;
    while(count!=0){
      if(i%2!=0){
	int j,k;
	j=i;k=1;
	while(j!=0){
	  count--;
	  if(count==0){
	    cout<<"TERM "<<N<<" IS "<<j<<"/"<<k<<endl;
	    break;
	  }
	  j--;
	  k++;
	}
      }
      else{
	int j,k;
	j=1;k=i;
	while(k!=0){
	  count--;
	  if(count==0){
	    cout<<"TERM "<<N<<" IS "<<j<<"/"<<k<<endl;
	    break;
	  }
	  j++;
	  k--;
	}
	
      }
      i++;
      
    }

    
    T--;
  }
}
