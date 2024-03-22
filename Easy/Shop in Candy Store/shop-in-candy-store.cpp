//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        int min_cost=0,max_cost=0;
        sort(candies,candies+N);
        int mini=N;
        for(int i=0;i<mini;i++)
        {
            min_cost+=candies[i];
            mini-=k;
        }
        int maxi=0;
        for(int j=N-1;j>=maxi;j--)
        {
            max_cost+=candies[j];
            maxi+=k;
        }
        vector<int>result;
        result.push_back(min_cost);
        result.push_back(max_cost);
        
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends