#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n ,h,k; cin>>n>>h>>k;
  vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int n_of_min=0,n_of_max=0;
    int mn=min(h,k);
    int mx=max(h,k);
    for(int i=0;i<n;i++){
        if(a[i]<=mn) n_of_min++;
        else if (a[i]<=mx) n_of_max++;
    } 
    int ans=min(n_of_min,n_of_max);
    if(ans!=n_of_min) ans+= abs(n_of_max-n_of_min)/2;
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