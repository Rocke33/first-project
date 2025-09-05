#include <bits/stdc++.h>
using namespace std;
void rocke() {
    string s;
    for(int i=0;i<10;i++){
            cin>>s;
    }
    int point =0;
    for(int j=0;j<10;j++){
        for(int i=0;i<10;i++){
        if(s[i]=='X'){
            if(i==0 || j==0 || i==9 || j==9) point+=1;
            else if()
        }
    }
 }
    cout<<point<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}