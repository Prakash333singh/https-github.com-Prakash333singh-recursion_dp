//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
         long sum=0,j=0,count=0,maxi=INT_MIN ;
        for(int i=0 ; i<n ; i++)
        {
            sum = sum + arr[i];
            count++ ;
            if(count==k)
            {
                maxi = max(maxi,sum) ;
                sum = sum - arr[j] ;
                j++ ;
                count-- ;
            }
        }
        return maxi ;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends