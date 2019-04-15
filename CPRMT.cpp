#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define LD long long double


int main(){
    
    while(!cin.eof()){
        string A,B;
        getline(cin,A);
        getline(cin,B);
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int l1=A.length();int l2 =B.length();
        if(l1>l2){
            string temp = A;
            A=B;B=temp ;
            int temp1 =l1;
            l1= l2;
            l2= temp1;
            //swaping integers
        }
        
        if(A[0]>B[l2-1]){
            cout<<"\n";
            continue;
        }
        string result;
        int i = 0,m = 0 ;
        while(i<l1 && m<l2){
            int flg=0;
            int j = m;
            while(j<l2){
                if(A[i]==B[j]){
                    result+=A[i];
                    flg=1;
                    m=j;
                    break;
                }
                j++;
            }
            if(flg==1){m++;}
            i++;
        }
        result+="\n";
        cout<<result;

    }
}


//SONUKUMARSAW
//Lovely Professional University