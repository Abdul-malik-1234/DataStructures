#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* insert_at_tail(Node* head,Node* n){
    if(head==NULL) return n;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}
void print_all_nodes(Node* head){
    if(head==NULL) return;
    if(head->next!=NULL)
    cout<<head->data<<"->";
    else cout<<head->data;
    return print_all_nodes(head->next);
}
Node* insert_at_head(Node* head,Node* n){
    if(head==NULL) return n;
    n->next=head;
    head=n;
    return head;
}
int main(){
    Node* h=new Node(5);
    for(int i=9;i>=6;i--){
        h=insert_at_tail(h,new Node(i));
    }
    // print_all_nodes(h);
    for(int i=4;i>=1;i--){
        h=insert_at_head(h,new Node(i));
    }
    print_all_nodes(h);
    return 0;
}