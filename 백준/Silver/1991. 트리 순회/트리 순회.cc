#include <iostream>
#include <vector>
using namespace std;

class node{
public:
    char ch;
    node* left;
    node* right;
    node(){}
    void addc(char c, node* l, node* r){
        ch = c;
        left = l;
        right = r;
    }
};

void preorder(node* x){
    cout<<x->ch;
    if(x->left!=NULL) preorder(x->left);
    if(x->right!=NULL) preorder(x->right);
}

void postorder(node* x){
    if(x->left!=NULL) postorder(x->left);
    if(x->right!=NULL) postorder(x->right);
    cout<<x->ch;
}

void inorder(node* x){
    if(x->left!=NULL) inorder(x->left);
    cout<<x->ch;
    if(x->right!=NULL) inorder(x->right);    
}

int main(){

    int n;
    string x;
    cin>>n;
    cin.ignore();
    vector<node*> tree(n);
    for(int i=0;i<n;i++){
        tree[i] = new node();
    }
    for(int i=0;i<n;i++){
        getline(cin, x);
        tree[x[0]-'A']->addc(x[0],x[2]=='.'?NULL:tree[x[2]-'A'],x[4]=='.'?NULL:tree[x[4]-'A']);
    }

    preorder(tree[0]);
    cout<<endl;
    inorder(tree[0]);
    cout<<endl;
    postorder(tree[0]);

    return 0;
}
