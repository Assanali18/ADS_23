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
        bool solve(string s){
            return solve(root, s) != NULL;
        }

    private:
        node* root;
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
        node* solve(node* cur, string s){
            for(int i = 0; cur && i < s.size();i++){
                if(s[i] == 'L'){
                    cur  =  cur->left;
                }else{
                    cur = cur->right;
                }
            }
            return cur;
        
        }


};

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    bst* tree = new bst();
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        tree -> add(arr[i]);
    }
    while(k--){
        string s; cin >> s;
        cout << (tree->solve(s)? "YES":"NO") << endl;
    }
    // tree->print();
    // cout << endl << tree->find(10);
    // cout <<endl << tree->find(20);

}