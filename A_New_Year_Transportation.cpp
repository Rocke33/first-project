#include <bits/stdc++.h>
using namespace std;

bool rocke() {
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=1;
    int i=0;
    while(i<t){
        sum+=a[i];
        if(sum==t){
            return true;
        }
        else{
            i=sum-1;
        }
    }
    return false;
}

int main() {
        if(rocke()) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    return 0;
}
