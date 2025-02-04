//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        int n=arr.size();
        
        // for(int i=0;i<n;i++){
            
        //     int sum = 0; 
            
        //     for(int j=i;j<n;j++){
        //         ///sum of 
        //         sum+=arr[j];
                
        //         if(sum==target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             return ans;
        //         }
        //     }
        // }
        
        
        ///1 2 3 7 5
        //  
        //0(n*n)
      int sum = 0;
    int start = 0;
    
    for (int end = 0; end < arr.size(); end++) {
        sum += arr[end];

        // Shrink the window if sum exceeds target
        while (sum > target && start <= end) {
            sum -= arr[start];
            start++;
        }

        // If a valid subarray is found
        if (sum == target) {
            ans.push_back(start + 1);  // 1-based index
            ans.push_back(end + 1);
            return ans;
        }
    }
    
    return {-1};  // No subarray found
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends