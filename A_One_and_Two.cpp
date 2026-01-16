#include <bits/stdc++.h>
using namespace std;

void rocke() {
 int n ; cin>>n;
 vector<int>v(n);
 int count_of_two=0;
 for(int i=0;i<n;i++) {
    cin>>v[i];
    if(v[i]==2) count_of_two++;
}
int again_cnt=0;
if(count_of_two==0) cout<<1<<endl;
else if(count_of_two%2==1) cout<<-1<<endl;
else{
    for(int i=0;i<n;i++){
          if(v[i]==2) again_cnt++;
        if(again_cnt==count_of_two/2){
            cout<<i+1<<endl;
            return;
        }
    }
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