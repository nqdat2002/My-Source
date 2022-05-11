#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    node *left;
    node *right;
} *tree;

bool isLeft(tree root, int value){
    return value < root->data;
}
bool isRight(tree root, int value){
    return value > root->data;
}
tree Insert(tree root, int value){
    if(root == NULL){
        root = new node();
        root->data = value;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if(isLeft(root, value)){
        root->left = Insert(root->left, value);
    }
    else if(isRight(root, value)){
        root-> right = Insert(root ->right, value);
    }
    return root;
}

int Cnt_MidNode(tree root){
    if(root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    return 1 + Cnt_MidNode(root->right) + Cnt_MidNode(root->left);
}

int main(){
    int t; cin >> t;
    while(t--){
        tree root = NULL;
        int n, value;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> value;
            root = Insert(root, value);
        }
        cout << Cnt_MidNode(root) << endl;
    }
    return 0;
}