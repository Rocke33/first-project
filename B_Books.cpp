#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,time;cin>>n>>time;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int maxBooks;
    int right=0,left=0,books=0,sum=0;
    while(right<n){
        sum=sum+v[right];
        if(sum>time){
            sum=sum-v[left];
            left++;
        }
         maxBooks=max(books,right-left+1);
        right++;
    }
    cout<<maxBooks;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}