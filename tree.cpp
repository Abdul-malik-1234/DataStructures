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
void preorder_traversal_of_tree(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    print_tree(root->left);
    print_tree(root->right);
}
void inorder_traversal_of_tree(Node* root){
    if(root==NULL) return;
    print_tree(root->left);
    cout<<"root->data"<<" ";
    print_tree(root->right);
}
int main(){
    Node* t=new Node(1);
    print_tree(t);
    return 0;
}