//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation( vector<int> &arr) {
	    // code here
	    
	    ////no of times array is  roated is equal to the index of its minimum element
      //so the index of minimun eleemnt is equal to k
      
      //brute appraoch 
    //   int ans=INT_MAX;
    //   int index = -1;
      
    //   for(int i=0;i<n;i++){
    //       if(arr[i]<ans){
    //           ans=arr[i];
    //           index=i;
    //       }
    //   }
    //   return index;
    int n=arr.size();
    

        int start=0;
        int end=n-1;
        
        while(start<end)
        {
            int mid=start+(end-start)/2;
        //if mid is greater then end then we will simply swift our search space to start=Mid+1
            if(arr[mid]>arr[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return start;
        
        //log(n)s
//////////////0(1)

	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends