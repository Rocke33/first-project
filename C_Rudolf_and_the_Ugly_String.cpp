#include <bits/stdc++.h>
using namespace std;
 int isfind(string s){
    int cnt=0;
    for(int i=0;i+2<s.size();i++){
        if((s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') ||
         (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')){
            cnt++;
            i+=1;
        }
    }
    return cnt;
 }
 int common_isfind(string s){
    int common_p=0;
    for(int i=0;i+4<s.size();i++){
        if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
            common_p++;
            i+=3;
        }
    }
    return common_p;
 }
void rocke() {
    int n; cin>>n;
   string s; cin>>s;
   int count=isfind(s);
   int common_p=common_isfind(s);
   if(count==0) {cout<<0<<endl;return;}
   cout<<count-common_p<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}