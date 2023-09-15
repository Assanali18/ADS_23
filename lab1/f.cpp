#include <bits/stdc++.h>
#define ll long long 
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){ 
    int n; cin >> n;
    int cnt = 0;
    int i  = 1;
    while(cnt<n){
        i++;
        if(isPrime(i)) ++cnt;
        
    }
    if(cnt == n) cout << i;
    
}