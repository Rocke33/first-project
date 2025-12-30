#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n; cin>>n;
    string s; cin>>s;
    string ans;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='a' || s[i]=='e'){
            ans.push_back(s[i]);
            ans.push_back(s[i-1]);i--;
            ans.push_back('.');
    }
    else{
        ans.push_back(s[i]);
        ans.push_back(s[i-1]);
        ans.push_back(s[i-2]);i-=2;
         ans.push_back('.');
    }
    }
    ans.erase(ans.end()-1);
    reverse(ans.begin(),ans.end());
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