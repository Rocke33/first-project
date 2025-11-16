#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
 
vector<int> primeset(int n){
    vector<int> res;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            res.push_back(i);
        }
    }
    return res;
}
 vector<int> notPrime(int n){
    vector<int> res;
    for(int i=4;i<=n;i++){
        if(!isprime(i)){
            res.push_back(i);
        }
    }
    return res;
}

void rocke() {
    int n; cin >> n;
    vector<int> notprimes = notPrime(n);
    vector<int> primes = primeset(n);
    int total=0;
    for(int i=0;i<notprimes.size();i++){
        int num=notprimes[i];
        int count=0;
        for(int j=0;j<primes.size();j++){
            if(num%primes[j]==0){
                count++;
            }
            if(count>2){
                break;
            }
        }
        if(count==2){
            total++;
        }
    }
    cout<<total<<endl;
}
int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}