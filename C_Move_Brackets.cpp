#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;string s;cin>>s;
    int count=0,first=0;
    for(int i=0;i<n;i++){
        if(s[i]==')'){
               if(first==0) count++;
               else first--;
        }
        else first++;
    }
    cout<<count<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}