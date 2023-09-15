#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    string s1, s2; cin >> s1 >> s2;
    stack<char> st;
    for(int i = 0; i< s1.size(); i++){
      if(s1[i] != '#') st.push(s1[i]);
      else st.pop();
    }
    stack<char> st1;
    for(int i = 0; i< s2.size(); i++){
      if(s2[i] != '#') st1.push(s2[i]);
      else st1.pop();
    }
    cout << (st == st1?"Yes" : "No");

}
