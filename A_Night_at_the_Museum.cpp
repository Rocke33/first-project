#include <bits/stdc++.h>
using namespace std;

void rocke() {
    string s; cin>>s;
    int rotation=0;
    int point=97;
    for(int i=0;i<s.size();i++){
           if(abs(point-(int)s[i])<14) rotation=rotation+abs(point-(int)s[i]);
           else {
           rotation=rotation+ 26-abs(point-(int)s[i]);
           }
           point=(int)s[i];
    }
    cout<<rotation<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}