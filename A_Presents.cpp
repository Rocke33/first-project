#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k=1;
    vector<int>result;
    for(int j=0;j<n;j++){
         for(int i=0;i<n;i++){
        if(v[i]==k){
            result.push_back(i+1);
            k++;break;
        }
      }
    }
    for(auto x: result){
        cout<<x<<" ";
    }
    
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}