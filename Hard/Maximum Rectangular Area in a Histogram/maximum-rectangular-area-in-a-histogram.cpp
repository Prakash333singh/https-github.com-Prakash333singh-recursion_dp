//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
     //calcuation of left nearest smaller index
    vector<long long> nearestSmallerRight(long long arr[], int n) 
    {
    vector<long long> ans;
    stack<pair<long long, long long>> s;
    int pseudoindex = n;

    for (int i = n - 1; i >= 0; i--) {
        if (s.empty())
            ans.push_back(pseudoindex);
            
        else if ( s.size()>0 && s.top().first < arr[i])
        {
            ans.push_back(s.top().second);
        }
        
        else if(s.size()>0 && s.top().first >=arr[i])
        {
            while (s.size()>0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            ans.push_back(s.empty() ? pseudoindex : s.top().second);
        }
        s.push({arr[i], i});
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<long long> nearestSmallerLeft(long long arr[], int n)
{
    vector<long long> ans;
    stack<pair<long long, long long>> s;
    int pseudoindex = -1;

    for (int i = 0; i < n; i++) {
        if (s.empty())
        ans.push_back(pseudoindex);
            
            
         else if ( s.size()>0 && s.top().first < arr[i])
        {
            ans.push_back(s.top().second);
        }
        
        else if(s.size()> 0 && s.top().first >=arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            
             ans.push_back(s.empty() ? pseudoindex : s.top().second);
        }
        
         s.push({arr[i], i});
    
        }
       return ans;
    }


long long getMaxArea(long long arr[], int n) {
    // Your code here
        //step 1. area =arr[i]*width[i]
        //? question in your mind that how to find the width
        //step2.
        //width[]=nsr-nsl-1;
     // width[i]=nsr[i]-nsl[i]-1;
        
        // neareast smallest index to right =nsr
        // neareast smallest index to left =nsl
        //6 has nearest index at 7 that have 0 value because of ground
        //-1 0 1 2 3 4 5 6 7 
        
    vector<long long> right = nearestSmallerRight(arr, n);
    vector<long long> left = nearestSmallerLeft(arr, n);

    long long maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        long long temp = arr[i] * (right[i] - left[i] - 1);
        maxSum = max(maxSum, temp);
    }

    return maxSum;
}
    
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends