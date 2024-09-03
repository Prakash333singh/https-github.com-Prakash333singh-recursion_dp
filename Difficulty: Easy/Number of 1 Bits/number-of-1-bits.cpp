//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int>convertBinary(int n,vector<int>&ans){
     while (n > 0) {
        ans.push_back(n % 2);
        n = n / 2;
    }
    return ans;
  }
    int setBits(int n) {
        // Write Your Code here
        vector<int>ans;
        int count = 0;
        convertBinary(n,ans);
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1)
              count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends