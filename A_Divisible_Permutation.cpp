#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll n; cin>>n;
  if(n%2==0){
    ll ans1=n/2+1,ans2=n/2;
    for(ll i=0;i<n;i++){
        if(i%2==0) cout<<ans1++<<" ";
        else cout<<ans2--<<" ";
    }
  }
  else{
    ll ans1=ceil(n/2.0),ans2=ans1-1;
    for(ll i=0;i<n;i++){
        if(i%2==0) cout<<ans1++<<" ";
        else cout<<ans2--<<" ";
    }
  }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}