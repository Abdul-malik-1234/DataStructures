#include <iostream>
#include <vector>
using namespace std;     
//Using RECURSION
// TIME COMPLEXITY-O(2^n),O(1)
// int fibonacci(int n) {
//   if(n<=1) return n;
  
//   return fibonacci(n-1)+fibonacci(n-2);

// }

//Using DP
// TIME COMPLEXITY: O(N),O(N)
//Top-Down Approach
//Step-1: Create n+1 size dp array and intitialize it to -1
//Step-2: Return karney se pehle dp array mein store kardo
//Step-3: check karo dp[n] -1 nahin hai agar -1 nahin hai
//toh return kardo
// int f(int n,vector<int> dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     dp[n]=f(n-1,dp)+f(n-2,dp);
//     return dp[n];
// }

//USING BOTTOM UP APPROACH
//TIME COMPLEXITY: O(N),O(N)
//Step-1: basecase check karlo aur uskey values ko dp mein daldo
//Step-2: check karo recursive call kahan tak ja raha hai usko dp array se replace karlo
//Step-3: dp[n] return karlo
// int f(int n,vector<int> dp){
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

//SPACE OPTIMIZATION-BRAIN STORMING
// TIME COMPLEXITY: O(N),O(1)
int f(int n){
    int first=0;
    int second=1;
    int curr;
    for(int i=2;i<=n;i++){
        curr=first+second;
        first=second;
        second=curr;
    }
    return curr;
}
int fibonacci(int n) {
  
//   vector<int> dp(n+1,-1);
//   return f(n,dp);
     return f(n);
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}