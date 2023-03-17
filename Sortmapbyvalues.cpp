//Approach: Convert map to vector of pairs sort vector of pairs
//using comparator function
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<char,int> p1,pair<char,int> p2){
    //Sort in ascending order
    return p1.second<p2.second;
}
void sortmapbyvalues(unordered_map<char,int> mp){
    //Creating vector of pairs
    vector<pair<char,int>> v;
    cout<<"Before sorting"<<endl;
    for(auto i:mp){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<"-----------"<<endl;
    for(auto i:mp){
        v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}
int main(){
    string s="aabbaaaccccccd";
    unordered_map<char,int> mp;
    for(auto i:s){
        mp[i]++;
    }
    sortmapbyvalues(mp);
    return 0;
}