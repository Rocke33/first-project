#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>ct;
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        count++;
    }
    else{
        ct.push_back(count);
        count=0;
    }
}
ct.push_back(count);
int mx=*max_element(ct.begin(),ct.end());
cout<<mx<<endl;
}
    return 0;
}