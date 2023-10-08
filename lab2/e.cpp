#include <bits/stdc++.h>
using namespace std;
struct Node{
    string val;
    Node* next;
    Node(string x){
        val = x;
        next = NULL;
    }
};

struct LinkedList{

        int size;
        Node* head;
        Node* tail;

    LinkedList(){
        size = 0;
        head = NULL;
        tail = NULL;
    }


    void addAtTail(string x){
        size++;
        Node* val = new Node(x);
        if(tail == NULL){
            head = val;
            tail = val;
        }else{
            tail->next = val;
            tail = val;
        }
    }

    void solve() {
        Node* cur = head;
        while(cur && cur->next) {
            if(cur->val == cur->next->val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
    }
    }

    void print(){
        vector<string> v;
        Node* cur = head;
        while(cur){
            v.push_back(cur->val);
            cur = cur->next;
        }
        for(int i = v.size()-1; i >= 0; i--) cout << v[i] << endl;
    }
};


int main() {
    int n; cin >> n;
    LinkedList* ll = new LinkedList();

    while(n--){
        string x; cin >> x;
        ll->addAtTail(x);
    }
    ll->solve();
    cout << "All in all:" <<" "<<  ll->size <<endl ;
    cout << "Students:" << endl;
    ll->print();
}