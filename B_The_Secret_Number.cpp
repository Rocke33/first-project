#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int n;cin>>n;
   vector<long long int>v;
   long long int tn=1;
    for(long long int k=1;k<18;k++) {
        tn*=10;
        long long int val=tn+1;
        if(n%val==0) {
            v.push_back(n/val);
        }
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
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