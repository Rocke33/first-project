#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,i=1;cin>>n;
    int count=0;
   while(i<=n){
       string s=to_string(i);
       for(int j=0;j<s.size();j++){
        if(s[j-1]==s[j]) count++;
       }
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}