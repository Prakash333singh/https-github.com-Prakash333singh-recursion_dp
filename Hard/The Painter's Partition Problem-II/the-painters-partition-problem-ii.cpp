//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
    
       //start will be starting from 90 to 203
      long long start=0,end=0,ans,mid;
       for(int i=0;i<n;i++){
           //start=max(start,arr[i]);
           if(start<arr[i])
           start=arr[i];
           end+=arr[i];
       }
       
       while(start<=end)
       {
           mid=start+(end-start)/2;
          long long pages=0,count=1;
           for(int i=0;i<n;i++)
           {
               pages+=arr[i];
               //agar hamara sum of pages mid se excred kar gya tuo
               //dusre student pe move karenge
               if(pages>mid){
                   count++;
                   pages=arr[i];
               }
           }
           
           if(count<=k)
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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends