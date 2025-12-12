#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
  string s; cin>>s;
  if(s.find("...")!=string::npos){
      cout<<2<<endl;
      return;
  }
  int cnt=count(s.begin(),s.end(),'.');
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