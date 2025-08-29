#include <bits/stdc++.h>
using namespace std;
        
void rocke() {
    int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
       if(sum%2!=0) cout<<"NO"<<endl;
       else if(n*2==sum && n%2!=0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}