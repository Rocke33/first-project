#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    int n;cin>>n;
    while(n--){
        int first,last;cin>>first>>last;
        int count=0;
        for(int i=first-1;i<last-1;i++){
              if(s[i]==s[i+1]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}