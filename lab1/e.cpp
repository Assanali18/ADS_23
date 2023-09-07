#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    deque<int> b, n;
    for(int i = 0; i < 5; i++){
      int x; cin >> x;
      b.push_back(x);
    }
    for(int i = 0; i < 5; i++){
      int x; cin >> x;
      n.push_back(x);
    }
    int cnt = 0;
    while(cnt < 1000000){
      if(b.empty()){
        cout << "Nursik " << cnt;
        return 0;
      }else if(n.empty()){
        cout << "Boris " << cnt;
        return 0;
      }
      else{
        if(b.front() > n.front() ){
        if(b.front() == 9 && n.front() == 0){
          n.push_back(b.front()); n.push_back(n.front());
          b.pop_front(); n.pop_front(); 
        }else{
          b.push_back(b.front()); b.push_back(n.front());
          b.pop_front(); n.pop_front(); 
        }
        
        }else{
          if(b.front() == 0 && n.front() == 9){
            b.push_back(b.front()); b.push_back(n.front());
            b.pop_front(); n.pop_front(); 
          }else{
            n.push_back(b.front()); n.push_back(n.front());
            b.pop_front(); n.pop_front(); 
          }
        }
        cnt++;
      }
      
    }
    cout << "blin nichya";

}