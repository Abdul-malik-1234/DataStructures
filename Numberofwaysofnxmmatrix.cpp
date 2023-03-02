//Question:Find the total number of ways of nxm matrix
//Condition: You can go only down and right
// if n==1 answer will be 1
//if m==1 answer will be 1
#include<iostream>
#include<vector>
using namespace std;
int number_of_ways(vector<vector<int>> vec,int n,int m){
    
    //basecase
    if(n==1 or m==1) return 1;

    return number_of_ways(vec,n-1,m)+number_of_ways(vec,n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        vec.push_back(v);
    }
    cout<<number_of_ways(vec,n,m);
    return 0;
}