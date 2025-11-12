#include <bits/stdc++.h>
using namespace std;

void rocke() {
int rows,cols,i,max_hash=0,max_row_index=-1;
cin>>rows>>cols;
 vector<string>mat(rows);
 for(int i=0;i<rows;i++){
    cin>>mat[i];
    int cnt=count(mat[i].begin(),mat[i].end(),'#');
    if(cnt>max_hash){
        max_row_index=i;
        max_hash=cnt;
    }
 }
 int x=max_row_index+1;
 int first_hash_index=mat[max_row_index].find('#');
 int y=first_hash_index+1+(max_hash-1)/2;
 cout<<x<<" "<<y<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}