#include<iostream>
using namespace std;
#include<vector>

int main(){
  vector <int> v;
  int n;cin>>n;
  while(n!=42){
    v.push_back(n);
    cin>>n;
  }
  for(auto i =v.begin();i!=v.end();i++){
    cout<<*i<<"\n";
  }
  return 0;
}
