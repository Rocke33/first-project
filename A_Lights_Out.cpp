#include <bits/stdc++.h>
using namespace std;

void rocke() {
 int arr[3][3];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
 }
 int sum;
 int ans[3][3];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=arr[i][j];
        if(i!=0) sum+=arr[i-1][j];
        if(i!=2) sum+=arr[i+1][j];
        if(j!=0) sum+=arr[i][j-1];
        if(j!=2) sum+=arr[i][j+1];
        if(sum%2==1) ans[i][j]=0;
        else ans[i][j]=1;
    }
 }
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ans[i][j];
    }
    cout<<endl;
 }
 cout<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}