#include <bits/stdc++.h>
using namespace std;

void rocke() {
    string s;cin>>s;
    vector<char>v;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='p')v.push_back('q');
        else if(s[i]=='q')v.push_back('p');
        else v.push_back('w');
    }
    for(auto x:v){
      cout<<x;
    }
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