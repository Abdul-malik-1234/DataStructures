 #include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder_traversal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void inorder_traversal(Node* root){
    if(root==NULL) return;
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
void postorder_traversal(Node* root){
    if(root==NULL) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* t=new Node(1);
    t->left=new Node(2);
    t->right=new Node(3);
    inorder_traversal(t);
    cout<<endl;
    preorder_traversal(t);
    cout<<endl;
    postorder_traversal(t);
    return 0;
}