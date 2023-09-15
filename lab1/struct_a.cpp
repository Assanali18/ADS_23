#include <bits/stdc++.h>
#define ll long long 
using namespace std;

struct MyDequeue{
    deque<int> dq;
    MyDequeue(){

    }
    void push_back(int x){
        dq.push_back(x);
    }
    void pop_back(){
        dq.pop_back();
    }
    void push_front(int x){
        dq.push_front(x);
    }
    void pop_front(){
        dq.pop_front();
    }
    int back(){
        return dq.back();
    }
    int front(){
        return dq.front();
    }
    bool empty(){
        return dq.empty();
    }
};

void solve() {
    int x;
    cin >> x;
    MyDequeue* obj = new MyDequeue();

    
    for(int i = x; i >= 1; i--) {
        obj->push_back(i);
        for(int j = 0; j <= i; j++) {
            int x = obj->back();
            obj->push_front(x);
            obj->pop_back();
        }
    }
    
    while(!obj->empty()) {
        int x = obj->front();
        cout << x << " ";
        obj->pop_front();
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    while(n--) {
        solve();
    }

}
    
    
  
