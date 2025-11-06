#include<bits/stdc++.h>
using namespace std;
void rocke(){
    string s; cin>>s;
    int n=s.size();
    if(s[0]!='1'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='1' && s[i]!='4'){
            cout<<"NO"<<endl;
            return;
        }
        if(i>1 && s[i]=='4' && s[i-1]=='4' && s[i-2]=='4'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    rocke();
    return 0;
}