//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int n, int k, vector<int> arr)
    {
        // code here
        //step we will sort the array
        sort(arr.begin(),arr.end());
        int count=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<=k)
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends