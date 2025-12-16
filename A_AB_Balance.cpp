#include <bits/stdc++.h>
using namespace std;

void rocke() {
 string s; cin>>s;
 int cnt_ab=0,cnt_ba=0;
    for (int i = 0; i + 1 < (int)s.size(); i++) {
        if (s[i] == 'a' && s[i + 1] == 'b') cnt_ab++;
        if (s[i] == 'b' && s[i + 1] == 'a') cnt_ba++;
    }
    if(cnt_ab==cnt_ba){
        cout<<s<<endl;
        return;
    }
     if(cnt_ab>cnt_ba){
         s[0]='b';
    }
    else  s[0]='a';
    cout<<s<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}