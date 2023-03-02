#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void permutations(vector<int> &v,int index,int n){
    if(index>=n){
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for(int i=index;i<n;i++){
        swap(v[index],v[i]);
        permutations(v,index+1,n);
        swap(v[index],v[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int index=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    permutations(v,index,n);
    return 0;
}