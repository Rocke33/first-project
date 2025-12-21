#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n; cin >> n;
    vector<int> v(n);
    int pos_min=1e9;
    int neg_max=-1e9;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]>=0){
            pos_min=min(pos_min,v[i]);
        }
        else {
            neg_max=max(neg_max,v[i]);
        }
    }
    neg_max=abs(neg_max);
    int ans=min(pos_min,neg_max);
    cout << ans << endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}