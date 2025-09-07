#include <bits/stdc++.h>
using namespace std;
void rocke() {
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int first=a[0];
    int last=2*(x-a[n-1]);
    if(n==1){
       cout<<max(first,last)<<endl;
       return;
    }
    vector<int>v;
    for(int i=0;i<n-1;i++){
       v.push_back(a[i+1]-a[i]);
    }
    int mid=*max_element(v.begin(),v.end());
    cout<<max({first,last,mid})<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}