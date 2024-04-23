//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  # define mod 1000000007
    int firstElement(int n) {
        // code here
         if(n == 0 || n == 1){
            return n;
        }
        int prev1 = 1;
        int prev2 = 1;
        
        for(int i = 0; i <n - 1; i++){
            int curr = (prev1 + prev2) % mod;
            
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends