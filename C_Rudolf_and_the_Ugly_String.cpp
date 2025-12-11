#include <bits/stdc++.h>
using namespace std;
 int isfind(string s){
    int cnt=0;
    //count of map
    int pos=s.find("map");
    while(pos!=string::npos){
        cnt++;
        pos=s.find("map",pos+1);
    }
    //count of pie
     pos=s.find("pie");
    while(pos!=string::npos){
        cnt++;
        pos=s.find("pie",pos+1);
    }
     if(cnt==0) return cnt;
     //count of common mapie
     pos=s.find("mapie");
    int common_p=0;
    while(pos!=string::npos){
        common_p++;
        pos=s.find("mapie",pos+1);
    }
    return cnt-common_p;
 }

void rocke() {
    int n; cin>>n;
   string s; cin>>s;
   int count=isfind(s);
   cout<<count<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}