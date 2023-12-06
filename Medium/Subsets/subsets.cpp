//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
   void sub(vector<int> &nums,int i, vector<int> &temp,vector<vector<int>>&ans)
    {
        if(i>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        // pick
        temp.push_back(nums[i]);
        sub(nums, i+1, temp,ans);

        // not pick
        temp.pop_back();
        //this pop is necessary because we are passing temp by reference. 
        //if anything will be picked in above call it will remain in temp if we will not pop it.
        sub(nums, i+1, temp,ans);
    }
    
    vector<vector<int> > subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;       
        sub(nums, 0, temp,ans); 
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