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
    Node* head, * tail;
    LinkedList(){
        size = 0;
        head = tail = NULL;
    }

    void add(int x){
        Node* newNode = new Node(x);
        if(!tail){
            head = tail = newNode;
        }else{
            tail ->next = newNode;
            tail = newNode;
        }
    }

    void print(){
        Node* cur = head;
        while(cur){
            cout << cur->val;
            cur = cur->next;
        }
    }

    void cyclic_left( int x){
        Node* frst = head;
        Node* prev = NULL;
        while(x--){
            prev = head;
            head = head->next;
        }
        prev->next = NULL;

        tail->next = frst;
    }  

    void cyclic_right( int x){
        Node* frst = head;
        Node* prev = NULL;
        while(x--){
            prev = head;
            head = head->next;
        }
        prev->next = NULL;

        tail->next = frst;
    } 
};

int main(){
    int n; cin >> n;
    LinkedList* ll = new LinkedList();
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ll->add(x);
    }

    ll->cyclic_left(1);
    ll->print();
}