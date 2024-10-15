//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
/*

Problem Restatement:
You are given an array stalls[] representing the positions of n stalls.
You are asked to place k cows in these stalls such that the minimum distance 
between any two cows is as large as possible.
The task is to find this maximum possible minimum distance.

start is initialized to 1 (minimum distance between cows) and end to the maximum
difference between the first and last stalls.
The binary search tries to find the largest possible minimum distance (mid) by 
checking if it's possible to place all cows with at least mid distance between them.
The solution efficiently finds the answer by adjusting the binary search
range based on the result of each attempt to place cows.



*/

    int solve(int n, int k, vector<int> &stalls) {
         
        int start=1,end,mid,ans;
        sort(stalls.begin(),stalls.end());
        
        end=stalls[n-1]-stalls[0];// maximum possible distance between two cows
        
       while (start <= end) {
           
          mid = start + (end - start) / 2; // mid represents the candidate minimum distance between cows
          
         int count = 1, position = stalls[0]; // place first cow in the first stall
    
      for (int i = 1; i < n; i++) {
        
        if (mid + position <= stalls[i]) 
        {
            count++; // place a cow in the current stall
            position = stalls[i]; // update the position of the last placed cow
        }
        
         }
    
               // If the number of cows placed is less than k, reduce the distance
         if (count < k) {
                  end = mid - 1; // try smaller distances
                 }
                 
         else {
               ans = mid; // valid configuration, try to maximize the distance
                start = mid + 1; // search for a larger distance
            }
         }
return ans;

    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends