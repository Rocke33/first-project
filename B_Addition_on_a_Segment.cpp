#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n;cin >> n;
  int sum=0,non_zeros=0;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=0) non_zeros++;
         sum+=a[i];
    }
    int ans =min(non_zeros,sum-n+1);
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