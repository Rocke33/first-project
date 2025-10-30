#include <bits/stdc++.h>
using namespace std;
void rocke() {
   long long int n,k,x; cin>>n>>k>>x;
    long long int mn_sum=k*(k+1)/2;
    long long int mx_sum=(k*(2*n-k+1))/2;
    if(x>=mn_sum && x<=mx_sum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) rocke();
}