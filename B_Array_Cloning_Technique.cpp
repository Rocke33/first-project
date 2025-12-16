#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   vector<int> v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int cnt=1,max_cnt=1;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            cnt++;
        }
        else{
            max_cnt=max(max_cnt,cnt);
            cnt=1;
        } 
}
       max_cnt=max(max_cnt,cnt);
       if(max_cnt==n){
        cout<<0<<endl;return;
       }
      int same = max_cnt;
    int copy = 0;

    while (same < n) {
        copy++;
        same *= 2;
    }
    cout<<copy + (n - max_cnt)<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}