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
            int level = 0;
            root = add(root, x, level);
        }
        void print(int x){
            node* our_root = find(root, x);
            print(our_root);
        }
        bool find(int x){
            return find(root,x)!= NULL;
        }
        void solve(){
            cout << sums.size() << endl;
            for(int i = 0; i < sums.size(); i++){
                cout << sums[i] << " ";
            }

        }

    private:
        node* root;
        vector<int> sums;
        node* add(node * cur, int x, int level){
            if (cur == NULL){
                if(level >= sums.size()) sums.push_back(x);
                else sums[level] += x;
                cur  =  new node(x);
            }else if(x < cur->val){
                cur -> left = add(cur->left, x, ++level);
            }else if(cur->val < x){
                cur->right = add(cur->right, x, ++level);
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
        


};

int main(){
    int n; cin >> n;
    int arr[n];
    bst* tree = new bst();
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        tree -> add(arr[i]);
    }
    tree -> solve();
  
    // tree->print();
    // cout << endl << tree->find(10);
    // cout <<endl << tree->find(20);

}