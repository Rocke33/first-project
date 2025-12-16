#include <bits/stdc++.h>
using namespace std;

void rocke() {
  string s,t; cin>>s>>t;
    int n=s.length();
    int m=t.length();
    int k=m-1;
    for(int i=n-1;i>=0 && k>=0;i--){
        if(s[i]==t[k]){
            k--;
        }
        else{
            for(int j=0;j<k;j++){
                if(s[i]==t[j]){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    if(k==-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}