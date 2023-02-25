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
//iterative-way
Node* reversell(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}  
//recursive-way
Node* reverse(Node* head){
    if(head==NULL or head->next==NULL) return head;
    Node* newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    cout<<"Creating a head node of 5:"<<endl;
    Node* h=new Node(5);
    print_all_nodes(h);
    cout<<"\n";
    cout<<"Inserting a 9,7,6 at head node of 5:"<<endl;
    for(int i=9;i>=6;i--){
        h=insert_at_tail(h,new Node(i));
    }
    print_all_nodes(h);
    cout<<"\n";
    cout<<"Inserting a 4,3,2,1 at head node of 5 and new head becomes 1:"<<endl;
    for(int i=4;i>=1;i--){
        h=insert_at_head(h,new Node(i));
        // break;
    }
    print_all_nodes(h);
    cout<<"\n";
    cout<<"Reversing the above linked list and now new head becomes 6:"<<endl;
    Node* head=reversell(h);
    print_all_nodes(head);
    cout<<"\n";
    cout<<"Reversing the above linked list recursively and now new head becomes 1:"<<endl;
    head=reverse(head);
    print_all_nodes(head);
    return 0;
}