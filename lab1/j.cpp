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
    int size(){
        return dq.size();
    }
};


void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


int main(){ 
    MyDequeue* dq = new MyDequeue();
    string s;
    while(getline(cin,s) && s!= "!" ){
        if(s[0] == '+'){
            dq->push_front(stoi(s.substr(2)));
            // showdq(dq);
        } 
        else if(s[0] == '-'){
            dq->push_back(stoi(s.substr(2)));
            // showdq(dq);
        } 
        else if(s[0] == '*'){
            if(dq->empty()){
                cout << "error" <<endl;
                continue;
            } 
            cout << dq->back() + dq->front()<< endl;
            if(dq->size()==1) dq->pop_back();
            else{
                dq->pop_back(); 
                dq->pop_front();
            }

        } 
    }
}