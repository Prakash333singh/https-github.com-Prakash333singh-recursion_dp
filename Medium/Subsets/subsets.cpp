//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void generate_subsets(vector<vector<int>>&ans,vector<int>&subset,int i,vector<int>&nums){
        //base case 
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        
        
        
        ///excluding the ith element
        generate_subsets(ans,subset,i+1,nums);
        
        //including the ith element 
        subset.push_back(nums[i]);
        generate_subsets(ans,subset,i+1,nums);
        subset.pop_back();
    }
    vector<vector<int> > subsets(vector<int>& nums)
    {
        vector<int>subset;
        vector<vector<int>>ans;
    
        
        generate_subsets(ans,subset,0,nums);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends