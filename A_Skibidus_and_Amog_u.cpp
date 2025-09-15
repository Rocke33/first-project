#include <bits/stdc++.h>
using namespace std;

void rocke() {
    string s;cin>>s;
    int l=s.size();
    for(int i=0;i<l-2;i++){
         cout<<s[i];
    }
    cout<<"i"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}