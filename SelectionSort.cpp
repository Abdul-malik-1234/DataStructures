#include<iostream>
#include<cmath>
using namespace std;
void selection_sort(int arr[],int n){
    //O(n^2)
    for(int i=0;i<n;i++){
        int min_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]) min_indx=j;
        }
        swap(arr[i],arr[min_indx]);
        for(int r=0;r<n;r++) cout<<arr[r]<<' ';
        cout<<"\n";     
    }
    
}
int main(){
    int arr[5]={5,4,3,2,1};
    selection_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}