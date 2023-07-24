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
void printnodesatdistk(Node* root,int k){
    if(k<0 or root==NULL) return;
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printnodesatdistk(root->left,k-1);
    printnodesatdistk(root->right,k-1);
}
int main(){
    Node* t=new Node(10);
    t->left=new Node(6);
    // t->left->left=new Node(30);
    t->right=new Node(8);
    t->right->left=new Node(7);
    t->right->left->left=new Node(11);
    t->right->left->right=new Node(12);
    // t->right=new Node(30);
    // t->left->left=new Node(40);
    // t->left->right=new Node(50);
    // t->right=new Node(30);
    // t->right->left=new Node(70);
    printnodesatdistk(t,3);
    return 0;
}