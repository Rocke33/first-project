#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n; cin>>n;
  vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]==1)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}