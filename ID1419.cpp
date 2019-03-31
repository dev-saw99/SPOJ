#include<iostream>
using namespace std;

int main(){

  string s ;
  getline(cin,s);
  int len = s.length();
  if(s[len-1]=='0'){
    cout<<2;
  }
  else{
    int max = 0;
    for(int i =0;i<len;i++){

      if((s[len-1]-'0')>max){
	max = s[len-1]-'0';
      }
      
    }
    cout<<1<<endl<<max<<endl;
  }
}
