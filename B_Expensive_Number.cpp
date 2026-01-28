#include <bits/stdc++.h>
using namespace std;

void rocke() {
  string s; cin>>s;
  long long int n,i,j;
           n=s.length();
    long long int cnt=0;
    for(i=0;i<n;i++){
        if(s[n-1-i]=='0') cnt++;
        else {
            break;
        }
    }
    for( j=0;j<n-1-i;j++){
        if(s[j]!='0') cnt++;
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