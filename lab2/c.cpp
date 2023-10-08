#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int x){
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
    void add(int x){
        Node* val = new Node(x);
        if(tail == NULL){
            head = val;
            tail = val;
        }else{
            tail->next = val;
            tail = val;
        }
    }

    void solve(){
        Node* cur = head;
        int it = 0;
        while(cur){
            if(it%2==0){
                cout << cur->val << " ";
            }
            it++;
            cur = cur->next;
        }
    }   
};



int main(){
    int n; cin >> n;
    LinkedList* ll = new LinkedList();
    while(n--){
        int x; cin >> x;
        ll->add(x);
    }
    ll->solve(); 

}





















