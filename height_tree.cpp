 #include<iostream>
 #include<cmath>
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
int heightoftree(Node* root){
    if(root==NULL) return 0;
    return 1+max(heightoftree(root->left),heightoftree(root->right));
}
int main(){
    Node* t=new Node(10);
    t->left=new Node(8);
    t->right=new Node(30);
    t->right->left=new Node(40);
    t->right->right=new Node(50);
    cout<<heightoftree(t);
    return 0;
}