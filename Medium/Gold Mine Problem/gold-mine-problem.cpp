//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 int fun(int i, int j, int m, int n, vector<vector<int>>&M, vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        return dp[i][j]=M[i][j]+max({fun(i-1,j+1,m,n,M,dp), fun(i,j+1,m,n,M,dp), fun(i+1,j+1,m,n,M,dp),});
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
            vector<vector<int>> dp(n, vector<int> (m,-1));
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,fun(i,0,n,m,M,dp));
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends