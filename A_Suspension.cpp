#include <bits/stdc++.h>
using namespace std;

void rocke() {
  long long int n,y,r;cin >> n >> y >> r;
  long long int ans=r;
  n=n-r;
  if(n>0) ans+=min(y/2,n);
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