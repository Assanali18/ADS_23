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
    int cnt = 0, cnt2 = 0;
    int i  = 1;
    vector<int> v;
    int flag = 1;
    while(cnt2<n){
        i++;
        if(isPrime(i)){
            cnt++;
            if(isPrime(cnt)){
                cnt2++;
            }
        } 
        if(cnt2 == n) cout << i;
    }
    
    
}
/*
i - cnt
2 - 1
3 - 2
5 - 3
7 - 4
11 - 5 
*/