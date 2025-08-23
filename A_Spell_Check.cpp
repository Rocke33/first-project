#include<bits/stdc++.h>
using namespace std;
void rocke(){
    string s;
    int n;
    cin>>n>>s;
    int flag=0;
    set<char>str;
     for(int i=0;i<n;i++){
      str.insert(s[i]);
     }
     if(n!=5) cout<<"NO"<<endl;

    else if(str.size()==5){
      for(int i=0;i<n;i++){
                if(s[i]=='T' || s[i]=='i' || s[i]=='m' || s[i]=='u' || s[i]=='r')  flag=1; 
                else {
                  flag=0;break;
                }                                  
          }
          if(flag==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
       
        else cout<<"NO"<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
     rocke();
   }
    return 0;
}