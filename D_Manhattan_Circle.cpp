#include <bits/stdc++.h>
using namespace std;

void rocke() {
int rows,cols,i;cin>>rows>>cols;
char mat[rows][cols];
vector<int>hash_vector;
for(int i=0;i<rows;i++){
    int hash=0;
    for(int j=0;j<cols;j++){
        cin>>mat[i][j];
        if(mat[i][j]=='#'){
            hash++;
        }
    }
    hash_vector.push_back(hash);
}
int mx=0,index_max=-1;
for(int i=0;i<rows;i++){
    if(hash_vector[i]>mx){
        mx=hash_vector[i];
        index_max=i;
    }
}
int x=index_max+1;
int first_hash=-1;
for(int j=0;j<cols;j++){
    if(mat[index_max][j]=='#'){
        first_hash=j;break;
    }
}
int y=first_hash+1+(mx-1)/2;
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