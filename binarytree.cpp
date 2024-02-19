#include<bits/stdc++.h>
using namespace std;
//for creating only node
/*
class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int data) {
        value = data;
        left = NULL;
        right = NULL;
    }
};

Node* binarytree(int new_node[], int& i) {
    if (new_node[i] == -1) {
        i++;
        return NULL;
    }

    Node* newnode = new Node(new_node[i++]);
    newnode->left = binarytree(new_node, i);
    newnode->right = binarytree(new_node, i);

    return newnode;
}

int main() {
    int new_node[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int i = 0;
    Node* root = binarytree(new_node, i);

    // Now 'root' points to the root of the binary tree.

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
class tree{
    public:
    int value;
    tree* left;
    tree* right;
    tree(int data){
        value=data;
        left=NULL;
        right=NULL;
    }
};
tree* buildtree(){
    int value;
    cout<<"enter data to be inserted"<<endl;
    cin>>value;
    tree* root=new tree(value);
    if(value==-1){
        return NULL;
    }

    
    cout<<"enter data at left of node"<<value<<endl;
    root->left=buildtree();
    cout<<"enter data at right of node"<<value<<endl;
    root->right=buildtree();
    return root;
}
int main(){
    tree* root=NULL;
    root = buildtree();
    return 0;
}


