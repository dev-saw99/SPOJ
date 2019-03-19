#include<iostream>
using namespace std;          //required headers

int calcSquares(int N){
  int Sum=0;
  while(N!=0){
    Sum=Sum+(N*N);
    N--;
  }
  return Sum;
}

int main(){
  int N ;                      //input test cases.
  cin>>N;
  while(N!=0){
      cout<<calcSquares(N)<<endl;       //function call to calculate the noo of squares.
    cin>>N;
  }
  return 0;
}

/* Solution Approach :
   when n=1 --> number of squares 1
   when n=2 --> number of squares 5   {1^2 + 2^2 }
   when n=3 --> number of squares 14  {1^2 + 2^2 + 3^2 }
*/
