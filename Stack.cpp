#include<iostream>
using namespace std;
class StackIndexOutOfBounds{

};
class stack{
    public:
    int n;
    int* ar;
    int top=0;
    stack(int number){
        ar=new int[number];
        n=number;
        cout<<"Your stack of "<<number<<"element size is created"<<endl;
    }
    void push(int x);
    void pop();
    void printelementsofastack();
    int size();
};
int stack::size(){
    return n;
}
void stack::push(int x){
    if(top+1>n) {
        throw new StackIndexOutOfBounds();
        return;
    }
    else{
        stack::ar[top++]=x;
    }
}
void stack::pop(){
    if(top-1<0){
        throw new StackIndexOutOfBounds();
        return;
    }
    else{
        top--;
    }
}
void stack::printelementsofastack(){
    for(int i=top-1;i>=0;i--){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    try{
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        stack* s=new stack(n);
        for(int i=0;i<n;i++){
            s->push(ar[i]);
        }
        s->printelementsofastack();
        cout<<s->size()<<endl;
        for(int i=0;i<3;i++){
            s->pop();
        }
        s->printelementsofastack();
        return 0;
    }
    catch(StackIndexOutOfBounds e){

    }
    
}