#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int k; cin >> k;
  int mini = INT_MAX, idx=6;

  for(int i = 0; i < n; i++){
    if(mini ==abs( k - v[i])) continue;
    mini = min(abs(k - v[i]), mini);
    if(mini == abs(k - v[i])) idx = i;
  }
  cout << idx;
}