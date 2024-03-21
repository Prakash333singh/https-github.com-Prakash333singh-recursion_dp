//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
           vector<pair<int,int>> vec;
           
            for(int i=0;i<n;i++)
            vec.push_back({arr[i],dep[i]});
            
            sort(vec.begin(),vec.end());
        
          priority_queue<int, vector<int>, greater<int>> pq;
          
            for(int i=0;i<n;i++)
            {
            if(pq.empty() || pq.top()>=vec[i].first)
            {
                pq.push(vec[i].second);
            }
            else
            {
                pq.pop();
                pq.push(vec[i].second);
            }
        }
        
        return pq.size();
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends