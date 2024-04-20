//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        //Your code here
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n+2;i++)
        {
            mp[arr[i]]++;
            
            
          int val=mp[arr[i]];
           
          if(val==2)
          {
              ans.push_back(arr[i]);
          }
        }
        return ans;
        
        // vector<int>ans;
        
        // unordered_set<int>s;
        
        // for(int i=0;i<n+2;i++)
        // {
        //   if(s.find(arr[i])!=s.end())
        //     ans.push_back(arr[i]);
            
        //     else
        //     s.insert(arr[i]);
        // }
        // return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends