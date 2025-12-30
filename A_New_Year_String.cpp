#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n ; cin>>n;
  string s; cin>>s;
  if(s.find("2026") != string::npos) {
    if(s.find("2025") != string::npos) {
        cout<<"0"<<endl;
        return;
        }
}
if(s.find("2025") != string::npos) {
        cout<<"1"<<endl;
        return;
        }
        cout<<"0"<<endl;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}