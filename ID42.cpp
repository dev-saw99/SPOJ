#include<iostream>
using namespace std;
int reverse(long int a );    //function to reverse the Number.
int main(){
  long int A,B;              //variables to store the two numbers.
  int N;                     //Number of test cases.
  cin>>N;
  while(N!=0){
    cin>>A>>B;
    A=reverse(A);
    B=reverse(B);
    //cout<<A<<" "<<B;
    long int result =A+B;
    //cout<<" "<<result;
    result=reverse(result);
    cout<<result<<"\n";
    N--;
  }
}
int reverse(long int a){
  long int new_num = 0;        //variable to store the reversed num.
  while(a!=0){
    new_num = new_num*10 + (a%10);
    a=a/10;
  }
  return new_num;
}
