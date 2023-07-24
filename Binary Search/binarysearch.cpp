#include<iostream>
using namespace std;
int binary_search(int arr[],int lo,int hi,int target){
    if(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(arr[mid]<target){
                lo=mid+1;
                return binary_search(arr,lo,hi,target);
            }
            if(arr[mid]>target){
                hi=mid-1;
                return binary_search(arr,lo,hi,target);
            }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binary_search(arr,0,4,3);
    return 0;
}