#include <bits/stdc++.h>
using namespace std;
void rocke_sorting(vector<int>& d , vector<int>& s){
    int n=d.size(),j,index;
    for(int i=0;i<n-1;i++){
        int index=i;
        for(j=i+1;j<n;j++){
            if(d[j]<d[index]){
                index=j;
            }
        }
        swap(d[i],d[index]);
        swap(s[i],s[index]);
    }
}
void rocke() {
   int n,i; cin>>n;
   vector<int>d(n); vector<int>s(n);
   for(int i=0;i<n;i++) cin>>d[i]>>s[i];
    rocke_sorting(d,s);
    int ans =d[0];
   for( i=1;i<n;i++){
           int need_time=2*(d[i] - d[i-1]);
           if(need_time<s[i-1]){
                s[i-1]=s[i-1]-need_time;
                s[i]=min(s[i],s[i-1]);
                d[i]=d[i]; ans=d[i];
           }
           else break;
   }
    ans=ans + (s[i-1]-1)/2;
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}