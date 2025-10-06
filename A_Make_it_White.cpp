#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    string s;cin>>s;
    int i,j;
    for(i=0;i<n;i++){
        if(s[i]=='B') break;
    }
    for(j=n-1;j>=0;j--){
        if(s[j]=='B') break;
    }
    cout<<j-i+1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}