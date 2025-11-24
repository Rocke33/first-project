#include <bits/stdc++.h>
using namespace std;
void rocke() {
    vector<char>red;
    char arr[8][8];
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<8;i++){
    bool allR=true;
    for(int j=0;j<8;j++){
        if(arr[i][j]!='R'){
            allR=false;
            break;
        }
    }

    //hello
    //world
    if(allR){
        cout<<"R"<<endl;
        return;
    }
   }
    cout<<"B"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}