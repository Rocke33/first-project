#include <bits/stdc++.h>
using namespace std;

void rocke() {
   string s; cin>>s;
   int n=s.length();
    int cnt=0;
    bool iszero=false, isfive=false;
    for(int i=n-1;i>0;i--){
        if(!iszero && s[i]=='0'){
            iszero=true;
            i--;
        }
        else if(!isfive && s[i]=='5'){
            isfive=true;
            i--;
            if(s[i]=='0') {iszero=true;i--;}
        }
        if(iszero && isfive){
            cnt++;
            if(s[i]=='0' || s[i]=='2' || s[i]=='5' || s[i]=='7'){
                break;
            }
        }
        else if(iszero && (s[i]=='0' || s[i]=='5')){
             break;
        }
        else if(isfive && (s[i]=='2' || s[i]=='7')){
             break;
        }
        else cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}