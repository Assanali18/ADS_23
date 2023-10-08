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
        head = tail = NULL;
    }


    void addAtTail(int x){
        Node* newNode = new Node(x);
        if(tail == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addAtHead(int x){
        Node* newNode = new Node(x);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }


    void solve(int data, int pos) {
        if(pos == 0){
            addAtHead(data);
        }else{
            Node* cur = head;
            Node* new_node = new Node(data);
            int it = 1;
            for(int i = 0; i < pos - 1; i++){
                cur = cur->next;
            }
            new_node->next = cur->next;
            cur->next = new_node;
        }
        

    }
     

    void print(){
        Node* cur = head;
        while(cur){
            cout << cur->val << " ";
            cur = cur->next;
        }
        
    }
};


int main() {
    int n; cin >> n;
    LinkedList* ll = new LinkedList();
    while(n--){
        int x; cin >>x;
        ll->addAtTail(x);
    }
    int data, pos; cin >> data >> pos;
    ll->solve(data, pos);
    ll->print();
   
}