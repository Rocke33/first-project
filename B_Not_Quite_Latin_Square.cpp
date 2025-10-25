#include <bits/stdc++.h>
using namespace std;

void rocke() {
    char s[3][3];
    int A=0,B=0,C=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>s[i][j];
            if(s[i][j]=='A')A++;
           else if(s[i][j]=='B')B++;
           else if(s[i][j]=='C')C++;
        }
    }
    if(A==2) cout<<'A'<<endl;
    else if(B==2) cout<<'B'<<endl;
    else cout<<'C'<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}