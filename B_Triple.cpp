#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0;int ans;
    for(int i=0;i<n-2;i++){
       if(a[i]==a[i+1] && a[i+1]==a[i+2]){
         ans=a[i];
        flag=1;
       }
    }
    if(flag==1){
        cout<<ans<<endl;
        return;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-2;i++){
       if(a[i]==a[i+1] && a[i+1]==a[i+2]){
        cout<<a[i]<<endl;
        return;
       }
    }
    cout<<-1<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}