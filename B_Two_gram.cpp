#include<bits/stdc++.h>
using namespace std;
void rocke(){
    long long int n;cin>>n;
    string s;cin>>s;
    map<string,int>mp;
    for(long long int i=0;i<n-1;i++){
        string tow_gram=s.substr(i,2);
        mp[tow_gram]++;
    }
     int mx=0; string ans="";
    for(auto it:mp){
        if(it.second>mx){
            mx=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
}
int main(){
     rocke();
    return 0;
}