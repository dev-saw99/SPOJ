#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int N;
  cin>>N;
  
  while(N!=-1){
    
    vector<int> Packets;
    int TotalCandies=0;
    for(int i=0;i<N;i++){

      int Candies;cin>>Candies;
      //      cout<<Candies;
      Packets.push_back(Candies);
      TotalCandies=TotalCandies+Candies;
      //      cout<<TotalCandies;
    }
    if(TotalCandies%N!=0){cout<<-1<<endl;}
    else{
      int equalCandies=TotalCandies/N;
      int count = 0 ;
      for(auto i=Packets.begin();i!=Packets.end();i++){
	if(*i<equalCandies){
	  count=count+(equalCandies-*i);
	}
      }
      cout<<count<<endl;
    }
    Packets.clear();
    cin>>N;
  }
  
}
