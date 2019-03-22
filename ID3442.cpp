#include<iostream>
#include<math.h>
using namespace std;

int pow(long long a, long long b)
{
    if(a == 0 && b == 0)    return 0;
    int ans = 1;
    while(b > 0)
    {
        if(b%2 == 1)
            ans *= a;
        a *= a;
        a %= 10;
        ans %= 10;
        b /= 2;
        if(ans == 0)    break;
    }
    return ans;
}

int main(){
  int n;
  cin>>n;
  while(n--){

  long long int a;
  long long int b;
  cin>>a>>b;
  int c= pow(a,b);
  cout<<c<<endl;
  
  }
}
