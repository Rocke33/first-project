#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a, b, n; cin >> a >> b >> n;
    vector<int>v(n);
    int sum=0;int time=b;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=1;i<n;i++){
        time+=min(v[i],a-b);
        }
    
    cout<<time<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}