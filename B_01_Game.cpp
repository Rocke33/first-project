#include<bits/stdc++.h>
using namespace std;
void rocke(){
    string s;cin>>s;
      int zero=count(s.begin(),s.end(),'0');
       int one=count(s.begin(),s.end(),'1');
     int moves=min(zero,one);
     if(moves%2==0) cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
}   
int main(){
    int t;cin>>t;
    while(t--){
           rocke();
    }
     return 0;
}