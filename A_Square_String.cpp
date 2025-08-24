#include <bits/stdc++.h>
using namespace std;

void rocke() {
    string s;
    cin>>s;
        int l=s.size()/2;

    if(s.size()%2!=0) {
        cout<<"NO"<<endl;
        return;
    } 
        for(int i=0;i<l;i++){
                if(s[i]!=s[l+i]){
                    cout<<"NO"<<endl;
                    return;
                }
        }
    
    cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}