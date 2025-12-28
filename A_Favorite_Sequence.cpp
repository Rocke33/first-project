#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> ans;
    for(int i=0;i<n/2;i++){
        ans.push_back(a[i]);
        ans.push_back(a[n-i-1]);
    }
    if(n%2==1) ans.push_back(a[n/2]);
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
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