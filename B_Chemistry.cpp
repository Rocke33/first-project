#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,k;cin>>n>>k;
     string s; cin>>s;
     map<char , int>freq;
     for (char ch : s) {
        freq[ch]++;
    }
    int odd=0;
    for(auto x:freq){
        if(x.second %2 != 0) odd++;
    }
    odd=odd-k;
    if(odd<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}