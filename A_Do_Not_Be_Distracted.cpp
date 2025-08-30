#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,count=0,i=0,pos;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[i]==s[j]){
                count++;
                 pos=j;
            }
        }
        if(pos-i+1 != count) {
            cout<<"NO"<<endl;
            return;
        }
        count=0;
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