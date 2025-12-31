#include <bits/stdc++.h>
using namespace std;

void rocke() {
     long long int n,k; cin>>n>>k;
    if(n%2==0 || k==1){ 
        cout<<"YES"<<endl;
        return;
    }
    n=n-k;
    if(n%2==0 && n>=0) cout<<"YES"<<endl;
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