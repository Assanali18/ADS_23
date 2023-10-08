#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string val;
    Node* next;
    Node(string x){
        val = x;
        next = NULL;
    }
};

struct Deque
{
    int size;
    Node* front;
    Node* back;

    Deque(){
        size = 0;
        front = back = NULL;
    }

    void add_front(string s)
    {
        Node* value = new Node(s);
        if(!front){
            front = value;
            back = value;
        }else{
            value->next = front;
            front = value;
        }
        cout << "ok" << endl;
        size++;
    }

    void add_back(string s)
    {
        Node* value = new Node(s);
        if(!back){
            front = value;
            back = value;
        }else{
            back->next = value;
            back = value;
        }
        cout << "ok" << endl;
        size++;
    }

    void erase_front()
    {
        if(!size){
            cout << "error"<< endl;
        }else{
            Node* new_front = front->next;
            string name = front->val;
            front = new_front;
            cout << name << endl;
            size--;
        }
        
    }

    void erase_back()
    {
        if(!size){
            cout << "error"<< endl;
        }else{
            cout << back->val<< endl;
            if(size == 1){
                front = back = NULL;
            }else{
                
                Node* cur = front;
                while(cur->next != back){
                    cur = cur->next;
                }
                cur->next = cur->next->next;
                back = cur;
            }
            size--;
            
        }
        
    }

    void _front()
    {
        if(!size){
            cout << "error" << endl;
        }else{
            cout << front->val << endl;
        }
    }

    void _back(){
        if(!size){
            cout << "error" << endl;
        }else{
            cout << back->val << endl;
        }
    }

    void clear(){
        front = back = NULL;
        size = 0;
        cout << "ok" << endl;
    }

};

int main(){
    string s;
    Deque* dq = new Deque();
    while(cin >> s)
    {
        if(s == "exit"){
            cout << "goodbye" << endl;
            break;
        }else if(s == "add_front"){
            string name; cin >> name;
            dq->add_front(name);
        }else if(s == "add_back"){
            string name; cin >> name;
            dq->add_back(name);
        }else if(s=="erase_front"){
            dq->erase_front();
        }else if(s=="erase_back"){
            dq->erase_back();
        }else if(s == "front"){
            dq->_front();
        }else if(s == "back"){
            dq->_back();
        }else if(s == "clear"){
            dq->clear();
        }

    }
}