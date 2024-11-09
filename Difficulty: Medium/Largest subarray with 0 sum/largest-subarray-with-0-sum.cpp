//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
      
        // int maxlength=0;
        // int n=arr.size();
        
        
        // for(int i=0;i<n;i++){
        //   int sum=0;
        
        //      for(int j=i;j<n;j++){
                 
        //          sum+=arr[j];
                 
        //       if(sum==0){
        //           maxlength=max(maxlength,j-i+1);
        //       } 
               
        //      }
          
        // }
        // return maxlength;
    
    int n=arr.size();
    unordered_map<int, int> mp;
    int sum = 0;
    int maxlength = 0;
    

    for (int i = 0; i < n; i++) {
        
        sum += arr[i];

        if (sum == 0) {
            // If the sum becomes zero, the subarray from the beginning has a sum
            //of zero.
            maxlength = i + 1;
        }
        else if (mp.find(sum) != mp.end()) {
            
            // If the sum has been encountered before, it means the subarray between
            //the two occurrences has a sum of zero.
            maxlength = max(maxlength, i - mp[sum]);
        }
        else {
            // Store the current sum and its index in the map.
            mp[sum] = i;
        }
    }
    
    return maxlength;
    
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends