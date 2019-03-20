#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;            //Required Headers;


int main(){

  int T;cin>>T;                 //No of test cases;
  while(T!=0){

    int N;cin>>N;               //No of Participants;
    int K = N;

    vector<int> MensHotness;    // List of Hotness of Participants;
    vector<int> WomenHotness;

    while(N!=0){                // Input Hotness of Participants;
      int Hm;cin>>Hm;
      MensHotness.push_back(Hm);
      N--;
    }
    
    while(K!=0){
      int Hw;cin>>Hw;
      WomenHotness.push_back(Hw);
      K--;
    }
    int maxHotness = 0 ;          //Sorting the hortness of participants
    
    sort(MensHotness.begin(),MensHotness.end());
    sort(WomenHotness.begin(),WomenHotness.end());

                                  //calculating Maximum hotness of participants.
    
    for(int i = 0;i<MensHotness.size();++i){
      maxHotness = maxHotness + (MensHotness[i]*WomenHotness[i]);
    }

    cout<<maxHotness<<endl;

    T--;
  }
  
}
