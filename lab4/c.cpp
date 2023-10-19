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
            len = 0;
        }
        void add (int x){
            root = add(root, x);
        }
        void print(int x){
            node* our_root = find(root, x);
            print(our_root);
        }
        bool find(int x){
            return find(root,x)!= NULL;
        }
        // int solve(int x){
        //     node* our_root = find(root, x);
        //     return solve(our_root);
        // }

    private:
        node* root;
        int len;
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
                cout << cur->val << " ";
                print(cur->left);
                // cout << cur->val << " ";
                print(cur->right);
            }
        }
        node* find(node* cur, int x){
            if(cur == NULL) return NULL;
            if(cur-> val == x) return cur;
            if(cur->val < x) return find(cur->right, x);
            return find(cur->left, x);
        }
        // int solve(node* our_root){
            
        //     if(our_root != NULL){
        //         len++;
        //         solve(our_root->left);
                
        //         solve(our_root->right);
        //     }
        //     return len;
        // }


};

int main(){
    int n; cin >> n;
    int arr[n];
    bst* tree = new bst();
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        tree -> add(arr[i]);
    }
    int k; cin >> k;
    tree -> print(k);
  
    // tree->print();
    // cout << endl << tree->find(10);
    // cout <<endl << tree->find(20);

}