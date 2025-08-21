#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int n;
    string s;
    cin>>n>>s;
    set<char>unique;
    for(int i=0;i<n;i++){
        unique.insert(s[i]);
    }
    cout<<n+unique.size()<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
     rocke();
   }
    return 0;
}