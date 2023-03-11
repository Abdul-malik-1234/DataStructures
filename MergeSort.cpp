#include<iostream>
using namespace std;
void merge(int ar[],int lo,int mid,int hi){
    int ar1[hi-lo+1];
    int s=0;
    int l=lo,r=mid+1;
    while(l<=mid and r<=hi){
        if(ar[l]<=ar[r]) ar1[s++]=ar[l++];
        else ar1[s++]=ar[r++];
    }
    while(l<=mid){
        ar1[s++]=ar[l++];
    }
    while(r<=hi){
        ar1[s++]=ar[r++];
    }
    int s1=0;
    for(int i=lo;i<=hi;i++){
        ar[i]=ar1[s1++];
    }
}
void merge_sort(int ar[],int lo,int hi){
    if(lo>=hi){
        return;
    }
    int mid=lo+(hi-lo)/2;
    merge_sort(ar,lo,mid);
    merge_sort(ar,mid+1,hi);
    merge(ar,lo,mid,hi);
}
int main(){
    int ar[5]={5,4,3,2,1};
    merge_sort(ar,0,4);
    for(int i=0;i<5;i++) cout<<ar[i]<<" ";
    return 0;
}