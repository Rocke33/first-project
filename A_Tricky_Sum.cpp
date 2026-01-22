#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int n; cin>>n;
    int k=0;
   while((1LL<<k) <= n) k++;
long long int ans=(n*(n+1)/2) - 2*((1LL<<k)-1);
   cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}