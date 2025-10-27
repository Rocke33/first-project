#include <bits/stdc++.h>
using namespace std;

void rocke() {
    string s;cin>>s;
    int half=s.size()/2;
    for(int i=0;i<half;i++){
         if(s[i]!='4' && s[i]!='7'){
            cout<<"NO"<<endl;
            return;
         }
         if(s[half-1-i]!='4' && s[half-1-i]!='7'){
            cout<<"NO"<<endl;
            return;
         }
    }
    cout<<"YES"<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}