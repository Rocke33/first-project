#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int m,n;cin>>m>>n;
    char a[m][n];
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y') flag=1;
        }
    }
    if(flag==0) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}