#include <bits/stdc++.h>
#define ll long long 
using namespace std;
struct MyStack{
    stack<int> st;
    MyStack(){}
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int top() {
        int x = st.top();
        return x;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main() {
    MyStack* st = new MyStack();
    int n; cin >> n;
    vector <int> v(n), ans;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    for(int i = 0; i < v.size(); i++) {

        while(!st->empty() && st->top() > v[i])
            st->pop();

        if(st->empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(st->top());
        }
        st->push(v[i]);
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
