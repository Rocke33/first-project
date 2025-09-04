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
            if((i+1)<=5){
            point=point+i+1;
         }
        else if(i==5) point=point+5;
        else if(i==6) point=point+4;
        else if(i==7) point=point+3;
        else if(i==8) point=point+2;
        else if(i==9) point=point+1;
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