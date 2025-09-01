#include <bits/stdc++.h>
using namespace std;
void rocke() {
    string s;
    int A=0;
    int B=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') A++;
        else B++;
    }
    if(B>A) cout<<"B"<<endl;
    else cout<<"A"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}