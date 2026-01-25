#include <bits/stdc++.h>
using namespace std;
 void prefix_sum(vector<long long int>& a){
    long long int n=a.size();
    for(long long int i=1;i<n;i++){
        a[i]=a[i]+a[i-1];
    }
}
void rocke() {
    long long int n,q,ans; cin>>n>>q;
    vector<long long int> a(n);
    for(long long int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end(), greater<long long int>());
    prefix_sum(a);
    while(q--){
        long long int x,y,ans; cin>>x>>y;
         if(x==y){
             ans=a[x-1];
         }
         else ans=a[x-1] -a[x-y-1]; 
         cout<<ans<<endl;
    }
   
}
int main() {
        rocke();
    return 0;
}