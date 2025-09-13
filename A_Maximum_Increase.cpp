#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]) count++;
        else {
            v.push_back(count);
            count=1;
        }
    }
    v.push_back(count);
    cout<<*max_element(v.begin(),v.end())<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}