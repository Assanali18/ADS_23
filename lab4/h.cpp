#include <bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
    node(int x){
        val = x;
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
        void print(){
            print(root);
        }
        bool find(int x){
            return find(root,x)!= NULL;
        }
        void solve(){
            solve(root);
        }

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
            }
            return cur;
        }
        void print(node* cur){
            if(cur != NULL){
                print(cur->left);
                cout << cur->val << " ";
                print(cur->right);
            }
        }
        node* find(node* cur, int x){
            if(cur == NULL) return NULL;
            if(cur-> val == x) return cur;
            if(cur->val < x) return find(cur->right, x);
            return find(cur->left, x);
        }

        void solve(node* cur){
            if(cur->right) solve(cur->right);
            sum += cur->val;
            cur->val  = sum;
            cout << cur->val << " ";
            if(cur->left) solve(cur->left);
        }


};

int main(){
    int n; cin >> n;
    int arr[n];
    bst* tree = new bst();
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        tree -> add(arr[i]);
    }
    tree->solve();

}