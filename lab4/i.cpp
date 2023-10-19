#include <bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
    int mult;
    node(int x){
        val = x;
        mult = 1;
        left = NULL;
        right = NULL;
    }
};


struct bst
{
    public:
        bst(){
            root = NULL;
            sum = 0;
        }
        void add (int x){
            root = add(root, x);
        }
        void remove(int x){
            remove(root, x);
        }
        void cnt(int x){
            cnt(root,x);
        }
        // void solve(){
        //     solve(root);
        // }

    private:
        node* root;
        int sum;
        node* add(node * cur, int x){
            if (cur == NULL){
                cur  =  new node(x);
            }else if(x < cur->val){
                cur -> left = add(cur->left, x);
            }else if(cur->val < x){
                cur->right = add(cur->right, x);
            }else if(cur->val == x){
                cur->mult++;
            }
            return cur;
        }
        void cnt(node *cur, int target) {
            if(!cur) {
                cout << 0 << endl;
                return;
            }
            if(cur->val < target) {
                cnt(cur->right, target);
            } else if(cur->val > target) {
                cnt(cur->left, target);
            } else {
                cout << cur->mult << endl;
            }
        }
        void remove(node *cur, int x) {
            if(!cur) {
                return;
            }
            if(cur->val < x) {
                remove(cur->right, x);
            } else if(cur->val > x) {
                remove(cur->left, x);
            } else {
                if(cur->mult > 0) {
                    cur->mult--;
                }
            }
        }

        // void solve(node* cur){
        //     if(cur->right) solve(cur->right);
        //     sum += cur->val;
        //     cur->val  = sum;
        //     cout << cur->val << " ";
        //     if(cur->left) solve(cur->left);
        // }


};

int main(){
    int q; cin >> q;
    bst *tree = new bst();
    while(q--) {
        string command;
        int x;
        cin >> command >> x;
        if(command == "insert") {
            tree->add(x);
        } else if(command == "delete") {
            tree->remove(x);
        } else if(command == "cnt") {
            tree->cnt(x);
        }
    }

}