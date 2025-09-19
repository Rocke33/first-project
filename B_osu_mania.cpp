#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    char a[n][4];
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                v.push_back(j+1);
            }
        }
    }
    for(int i=v.size()-1;i>=0;i--){
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;cin>>t;
    while (t--) {
        rocke();
    }
    return 0;
}