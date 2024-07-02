//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    
	    ////no of times array is  roated is equal to the index of its minimum element
      //so the index of minimun eleemnt is equal to k
      
      //brute appraoch 
      int ans=INT_MAX;
      int index = -1;
      
      for(int i=0;i<n;i++){
          if(arr[i]<ans){
              ans=arr[i];
              index=i;
          }
      }
      return index;


	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends