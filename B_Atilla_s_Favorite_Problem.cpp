#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    string s;cin>>s;
    vector<int>s1(n);
    for(int i=0;i<n;i++){
        int asc=(int)s[i];
        s1.push_back(asc);
    }
    cout<<*(max_element(s1.begin(),s1.end()))-96<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}