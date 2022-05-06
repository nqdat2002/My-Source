#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int infor;
    node *left;
    node *right;
} *tree;
tree makeRoot(int u){
    tree root = new node();
    root->infor = u;
    root->left = NULL;
    root->right = NULL;
    return root;
}
tree Search(tree root, int u){
    if(root == NULL) return NULL;
    if(root->infor == u) return root;
    tree p = Search(root->left, u);
    if(p == NULL) p = Search(root->right, u);
    return p;
}
void AddLeft(tree &root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->left == NULL){
        p->left = makeRoot(v);
    }
}
void AddRight(tree &root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->right == NULL){
        p->right = makeRoot(v);
    }
}
bool ok;
int countLeaf(tree root){
    if(root == NULL || !ok) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    if(!(root->left != NULL && root->right != NULL)) {
        ok = false;
        return 0;
    }
    return countLeaf(root->right) + countLeaf(root->left);
}
int main(){
    int t; cin >> t;
    while (t--){
        tree root = NULL; ok = true;
        int n; cin >> n;
        int u, v;
        char x;
        while(n--){
            cin >> u >> v >> x;
            if(root == NULL){
                root = makeRoot(u);
            }
            if(x == 'L') AddLeft(root, u, v);
            else AddRight(root, u, v);
        }
        int count_left = countLeaf(root->left), count_right = countLeaf(root->right);
        if(ok && count_left == count_right) cout << "Yes";
        else cout << "No";    
        cout << endl;
    }
}