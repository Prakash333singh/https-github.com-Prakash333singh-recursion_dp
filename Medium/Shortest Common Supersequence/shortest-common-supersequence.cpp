//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
          vector<vector<int>>dp(m + 1, vector<int>(n + 1, 0));
        for(int i = m - 1; i >= 0; i--)
        {
            for(int j = n - 1; j >=0; j--)
            {
                if(X[i] == Y[j])
                dp[i][j] = 1 + dp[i + 1][j + 1];
                else 
                dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
        return n + m - dp[0][0];
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends