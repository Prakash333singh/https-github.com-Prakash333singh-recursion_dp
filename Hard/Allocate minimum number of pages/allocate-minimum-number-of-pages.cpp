//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {
        //edge case
       if(M>N)
       return -1;
       
       
       //start will be starting from 90 to 203
       int start=0,end=0,ans,mid;
       for(int i=0;i<N;i++){
           start=max(start,arr[i]);
           end+=arr[i];
       }
       while(start<=end)
       {
           mid=start+(end-start)/2;
           int pages=0,count=1;
           for(int i=0;i<N;i++)
           {
               pages+=arr[i];
               //agar hamara sum of pages mid se excred kar gya tuo
               //dusre student pe move karenge
               if(pages>mid){
                   count++;
                   pages=arr[i];
               }
           }
           
           if(count<=M)
           {
               ans=mid;
               end=mid-1;
           }
           else
           {
               start=mid+1;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends