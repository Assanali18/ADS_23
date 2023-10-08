#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
	int n;cin >> n;
	vector<int> v(n), res;
	map<int,int> mp;
	for(int i = 0; i < n; i++){
	cin >> v[i];
	mp[v[i]] ++;
	}
	int maxi = 0;
	for(auto it:mp){
	if(it.second >= maxi) {
		maxi = it.second;
	}
	}
	for(auto it:mp) if(it.second == maxi ) res.push_back(it.first);
	sort(res.rbegin(), res.rend());
	for(auto it:res) cout << it << " "; 
  

}