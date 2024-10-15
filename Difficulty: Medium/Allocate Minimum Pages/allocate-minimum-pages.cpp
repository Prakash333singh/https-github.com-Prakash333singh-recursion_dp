//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        ///base case'
        //if the no of books is less then the no of students
        if(m>n)return -1;
        
        int start=0;
        int end=0,ans;
        
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        /// start=90 
        // 
        
        //start end mil jayenge
        
        while(start<=end){
            
            int mid=start+(end-start)/2;
            
             int pages=0,count=1;
        
             for(int i=0;i<n;i++){
                 
                 pages+=arr[i];
                 
                 if(pages>mid){
                     count++;
                     pages=arr[i];
                 }
                 
             }
            
//if i am able successfully divide books into m students 
            if(count <= m){
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends