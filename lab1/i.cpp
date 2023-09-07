#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
    int n; cin >> n;
    string s; cin >> s;
    queue<int> kat, sak;
        for (int i = 0; i < n; i++){
            if (s[i] == 'K'){
                kat.push(i);
            }
            else {
                sak.push(i);
            }
        }
        while (!kat.empty() && !sak.empty()){
            if (kat.front() < sak.front()){
                kat.push(n++);
            }
            else {
                sak.push(n++);
            }
            kat.pop(), sak.pop();
        }
        cout << (kat.empty() ? ("SAKAYANAGI") : ("KATSURAGI"));
}