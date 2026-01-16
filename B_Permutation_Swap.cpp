#include <bits/stdc++.h>
using namespace std;
void rocke() {
  int n; cin>>n;
  vector<int> a(n);
  vector<int> ans;
    for(int i=0;i<n;i++) {
                      cin>>a[i];
                    int pos =i+1;
                if(a[i]!=pos) ans.push_back(abs(a[i]-pos));
              }
        unordered_map<int,int> mp;
        int max_freq=0,res=-1;
        for(int x: ans){
            mp[x]++;
            if(max_freq<mp[x]){
                max_freq=mp[x];
                res=x;
            }
        }
        cout<<res<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}