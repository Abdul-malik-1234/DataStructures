#include<iostream>
#include<cmath>
#include<queue>
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
int height(Node* root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
void distbyk(Node* root,int k){
    if(root==NULL or k<0) return;
    if(k==0) {
        cout<<root->data<<" ";
        return;
    }
    distbyk(root->left,k-1);
    distbyk(root->right,k-1);
}
// void levelordertraversal(Node* root){
//     //O(n*h) inefficient approach
//     for(int i=0;i<height(root);i++){
//         distbyk(root,i);
//         cout<<"\n";
//     }
// }
void levelordertraversal(Node* root){
    //time complexity-O(n)
    queue<Node*> q;
    if(root==NULL) return;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        cout<<curr->data<<" ";
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }


}
int main(){
    Node* n=new Node(10);
    n->left=new Node(20);
    n->right=new Node(30);
    n->left->left=new Node(8);
    n->left->right=new Node(7);
    n->right->right=new Node(6);
    n->left->right->left=new Node(9);
    n->left->right->right=new Node(15);
    levelordertraversal(n);
    return 0;
}