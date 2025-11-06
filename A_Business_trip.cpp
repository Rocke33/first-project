#include<bits/stdc++.h>
using namespace std;
void rocke(){
    long long int k; cin>>k;
    vector<long long int>v(12);
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    long long int sum=0;int i=0;
    while (i<12 && k>sum){
       sum+=v[i];
         i++;
    }
    if(sum<k){
        cout<<-1<<endl;
    }
    else cout<<i<<endl;
}
int main(){
    rocke();
    return 0;
}