#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin >> n;
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<9<<endl;
    else if(n==3) cout<<29<<endl;
    else if(n==4) cout<<56<<endl;
    else{
        int ans;
        ans = (n*n-1)+(n*n-n)+(n*n-n-1)+(n*n-n-2)+(n*n-2*n-1);
        cout<<ans<<endl;
    }


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}