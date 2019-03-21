#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string LongSubtraction(string Apples,string extra){
  int len = extra.length();
  string result= "";
  reverse(extra.begin(),extra.end());
  reverse(Apples.begin(),Apples.end());
  int carry = 0;
  for(int i = 0;i <len;i++){
    int sub = ((Apples[i]-'0')-(extra[i]-'0')-carry);
    if(sub < 0){
      sub=sub+10;
      carry=1;
    }
    else{
      carry=0;
    }
    result.push_back(sub+'0');
  }
    for(int i=len;i<Apples.length();i++){
    int sub = ((Apples[i]-'0')-carry);
    if(sub<0)
      {
	sub=sub+10;
	carry=1;
      }
    else{carry=0;}
    result.push_back(sub+'0');
  }
  reverse(result.begin(),result.end());
  return result;
}

string LongDivision(string Apples,string extra){
  string dividend = LongSubtraction(Apples,extra);
  string result;
  int index = 0;
  int temp=dividend[index]-'0';
  while(temp<2){
    temp = temp* 10+(dividend[++index]-'0');
  }
  while(dividend.size()>index){
    result+=(temp/2)+'0';
    temp=(temp%2)*10+dividend[++index]-'0';
  }
  if(result.length()==0){
    return "0";
  }
  else return result;
}
string LongAdd(string A,string B){
  if(A.length()>B.length()){
    swap(A,B);
  }
  string add = "";
  reverse(A.begin(),A.end());
  reverse(B.begin(),B.end());

  int carry= 0;
  for(int i=0;i<A.length();i++){
    int sum = ((A[i]-'0')+(B[i]-'0')+carry);
    add.push_back(sum%10+'0');
    carry =sum/10;
  }
  for(int i =A.length();i<B.length();i++){
    int sum = ((B[i]-'0')+carry); 
        add.push_back(sum%10 + '0'); 
        carry = sum/10;
  }
  if (carry){ 
    add.push_back(carry+'0');}

  reverse(add.begin(), add.end()); 
  return add;
}


int main(){
  for(int i=0;i<10;i++){
    string TotalApples;
    string extraApples;
    string A,B;
    getline(cin,TotalApples);
    getline(cin,extraApples);
    //    cout<<LongSubtraction(TotalApples,extraApples)<<endl;
    B = LongDivision(TotalApples,extraApples);
    A = LongAdd(B,extraApples);
    cout<<A<<endl<<B<<endl;
  }
}
