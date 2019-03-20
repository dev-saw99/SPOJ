#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;                  //Required Headers

int main(){

  int N;cin>>N;                      //Number of columns

  string str;
  while(N!=0){
    cin.ignore(100,'\n');
    getline(cin,str);
    int len = str.length();
    vector<vector<char> > rows;
    vector<char> cols;
    vector<char> result;
    int n=N,j=0;
    for(int i=0;i<len/N;i++){
      for(j;j<n;j++){
	cols.push_back(str[j]);
      }
      j=n;n=n+N;
      if(i%2!=0 && i!=0){
	reverse(cols.begin(),cols.end());
      }
      rows.push_back(cols);
      cols.clear();
  }
    
       for(int i=0;i<N;i++){
	 for(int k=0;k<len/N;k++){
	   cout<<rows[k][i];
      }
      }
    cout<<endl;
    cin>>N;
    
  }
}
