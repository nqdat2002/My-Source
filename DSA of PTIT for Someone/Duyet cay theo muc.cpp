#include <bits/stdc++.h>
using namespace std;
typedef struct node {
    int infor;
    struct node *left;
    struct node *right;
} *tree;
tree makeNode(int u){
    tree p = new node();
    p->infor = u;
    p->left = NULL;
    p->right = NULL;
    return p;
}
tree Search(tree root, int u){
    if(root == NULL) return NULL;
    if(root->infor == u) return root;
    tree p = Search(root->left, u);
    if(p == NULL) p = Search(root->right, u);
    return p;
    
}
void addLeft(tree &root, int u, int v){
    tree q, p = Search(root, u);
    if(p == NULL) return;
    if(p->left == NULL){
        q = makeNode(v);
        p->left = q;
    }

}
void addRight(tree &root, int u, int v){
    tree q, p = Search(root, u);
    if(p == NULL) return;
    if(p->right == NULL){
        q = makeNode(v);
        p->right = q;
    }
}
int n, u, v;
char x;
void Level_order(tree root){
    queue <tree> q;
    q.push(root);
    while (!q.empty()){
        if(q.front() == NULL){
            q.pop();
            continue;
        }
        cout << q.front()->infor << " ";
        q.push(q.front()->left);
        q.push(q.front()->right);
        q.pop();
    }
}
int main(){
    int t; cin >> t;
    while (t -- ){
        tree root = NULL;
        cin >> n;
        while (n --){
            cin >> u >> v >> x;
            if(root == NULL)
                root = makeNode(u);
            if(x == 'L') addLeft(root, u, v);
            else addRight(root, u, v);
        }
        Level_order(root);
        cout << endl;
    }
    return 0;
}