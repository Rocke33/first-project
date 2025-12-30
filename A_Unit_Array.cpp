#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n; cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1) count++;
    }
    int pos_one=n-count;
    int neg_one=count;
    int minus=count;
    if(pos_one>=neg_one){
        if(neg_one%2==0) cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }
     neg_one=neg_one-pos_one;
     int ans=ceil(neg_one/2.0);
      minus=minus-ans;
     if(minus%2==1) ans++;
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