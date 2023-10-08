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


    void add(string x){
        Node* val = new Node(x);
        if(tail == NULL){
            head = val;
            tail = val;
        }else{
            tail->next = val;
            tail = val;
        }
    }

    void solve(int k) {
        Node* tmp = head;
        while(tmp->next) {
            tmp = tmp->next;
        }
        Node* end;
        tmp->next = head;
        while(k--) {
            end = head;
            head = head->next;
        }
        end->next = NULL;
    }

    void print(){
      Node* cur = head;
      while(cur){
        cout << cur->val <<" ";
        cur = cur->next;
      }
    }
};


int main() {
  int n, k; cin >> n >> k;
  LinkedList* ll = new LinkedList();

  for(int i = 0; i < n; i++){
    string x; cin >> x;
    ll->add(x);
  }
  
  ll->solve(k);
  ll->print();
}


