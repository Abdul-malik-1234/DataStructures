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
class Tree{
    public:
    int idx=-1;
    Node* buildtree(int arr[]){
        idx++;
        if(arr[idx]==-1){
            return NULL;
        }
        Node* n1=new Node(arr[idx]);
        n1->left=buildtree(arr);
        n1->right=buildtree(arr);
        return n1;
    }
    Tree(){
        cout<<"Tree Constructor is called\n";
    }
};
void preOrder(Node* root){
    if(root==NULL){
        cout<<"-1"<<",";
        return;
    }
    cout<<(root->data)<<",";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<",";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL){
        // cout<<"-1"<<",";
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<",";
}
int heightOfTree(Node* root){
    if(root ==NULL) return 0;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}
void levelOrder(Node* root,int level){
    //O(n^2)
    if(root==NULL) return 0;
    if(level==1){
        cout<<root->data<<" ";
    }
    


}
int main(){
    int preorder[13]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* tree=new Tree();
    Node* root=tree->buildtree(preorder);
    // cout<<root->data<<endl;
    // cout<<"Pre Order Sequence:\n";
    // preOrder(root);
    // cout<<"In Order Sequence:\n";
    // inOrder(root);
    cout<<"Post Order Sequence:\n";
    postOrder(root);
    cout<<"Height of Tree \n";
    cout<<heightOfTree(root);
    return 0;
}