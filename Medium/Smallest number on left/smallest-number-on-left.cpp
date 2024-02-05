//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
         // Complete the function
    // vector<int>ans;
    // for(int i=n-1;i>=0;i--)
    // {
    //     bool found=false;
    //     for(int j=i-1;j>=0;j--)
    //     {
    //         if(arr[j]<arr[i])
    //         {
    //             ans.push_back(arr[j]);
    //             found=true;
    //             break;
    //         }
    //     }
    //      if (!found)
    //     {
    //         ans.push_back(-1);
    //     }
    // }
    // reverse(ans.begin(),ans.end());
    // return ans;
    
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
      if(s.size()==0)
      ans.push_back(-1);
      
      else if(s.size()>0 && s.top()<arr[i])
      {
          ans.push_back(s.top());
      }
      else if(s.size()>0 && s.top()>=arr[i])
      {
        while(s.size()>0 && s.top()>=arr[i])
        {
            s.pop();
        }
        if(s.size()==0)
        ans.push_back(-1);
        else
        ans.push_back(s.top());
      }
      
      s.push(arr[i]);
    }
    
  return ans;  
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends