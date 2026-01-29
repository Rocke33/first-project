#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll n,k,f,t,ans,res=-1e9; cin>>n>>k;
  for(ll i=0;i<n;i++){
     cin>>f>>t;
      if(k<t) ans=f-(t-k);
      else ans=f;
      res=max(res,ans);
  }
  cout<<res<<endl;
}

int main() {
        rocke();
    return 0;
}