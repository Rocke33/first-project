#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0,last =n-1;
    int count=0;
    while(k>v[i] && i<last && i<n-1) {
         while (v[i]+v[last]>k && i<last) last--;
        if(v[i]+v[last]==k && last!=i){
            last--; count++;
        }
        i++;
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}