#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    int a[n];
    int sum=0,sereja=0,dimla=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int i=0,l=1,org=n;
    while(l<=org){
        if(l%2==1){
            if(a[i]>a[org-1-i]){
             sereja+=a[i];
             i++;
        }
        else{
            sereja+=a[org-1-i];
            n--;
        }
        }
        else{
            if(a[i]>a[org-1-i])i++;
            else n--;
        }
        l++;
    }
    cout<<sereja<<" "<<sum-sereja;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}