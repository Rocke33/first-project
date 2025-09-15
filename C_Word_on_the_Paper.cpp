#include <bits/stdc++.h>
using namespace std;

void rocke() {
    char a[8][8];
    vector<char>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
            if(a[i][j]!='.') v.push_back(a[i][j]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
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