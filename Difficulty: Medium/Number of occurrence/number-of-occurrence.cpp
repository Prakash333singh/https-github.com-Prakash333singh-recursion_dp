//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int first_positon(int *arr,int start,int end,int x){
		   
		    int res=-1;
		    while (start<=end){
		         int mid=start +(end-start)/2;
		         
		         if(arr[mid]==x){
		             res=mid;
		             end=mid-1;
		         }
		         else if(x>arr[mid])
		         {
		            start=mid+1;
		         }
		         else
		         end=mid-1;
		         
		    }
		    return res;
		}
		
			int last_positon(int *arr,int start,int end,int x){
		   
		    int res=-1;
		    while (start<=end){
		         int mid=start +(end-start)/2;
		         
		         if(arr[mid]==x){
		             res=mid;
		             start=mid+1;
		         }
		         else if(x>arr[mid])
		         {
		            start=mid+1;
		         }
		         else
		         end=mid-1;
		         
		    }
		    return res;
		}
		
	int count(int arr[], int n, int x) {
	    // code here
	    
	    ///index of last occurance - index of first occrance + 1'
	    ///
	    int start=0;
	    int end = n-1;
	    
	    
	    int firstOcc=first_positon(arr,start,end,x);
	    int lastOcc=last_positon(arr,start,end,x);
	    
	       if (firstOcc == -1) {
        return 0; 
         }
	   
	    return lastOcc-firstOcc+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends