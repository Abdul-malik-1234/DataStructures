#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    //O(n^2)
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n+1;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            } 
        }
        if(flag==true) break;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}