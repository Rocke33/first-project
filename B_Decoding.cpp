#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n; cin>>n;
  string s; cin>>s;
  string ans="";
  for(int i=n-2;i>=0;i=i-2) ans+=s[i];
  int start;
  if(n%2==0) start=1;
  else start=0;
    for(int i=start;i<n;i=i+2) ans+=s[i];
    cout<<ans<<endl;
} 

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}