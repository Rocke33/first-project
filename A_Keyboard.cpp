#include <bits/stdc++.h>
using namespace std;

void rocke() {
    char direction; cin>>direction;
    string s; cin>>s;
    string ideal="qwertyuiopasdfghjkl;zxcvbnm,./";
    vector<char>new_s;
    if(direction=='R'){
        for(int i=0;i<s.size();i++){
            char char_of_s=s[i];
            for(int j=0;j<ideal.size();j++){
                if(ideal[j]==char_of_s){
                    new_s.push_back(ideal[j-1]);
                }
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            char char_of_s=s[i];
            for(int j=0;j<ideal.size();j++){
                if(ideal[j]==char_of_s){
                    new_s.push_back(ideal[j+1]);
                }
            }
       }
    }
    for(int i=0;i<new_s.size();i++){
       cout<<new_s[i];
    }
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}