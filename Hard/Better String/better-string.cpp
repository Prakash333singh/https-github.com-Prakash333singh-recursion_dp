//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int distinctSubsequences(string s)
    {
        int ans = 1;
        int mp[26] = {0};
        for (char i : s)
        {
            int seq = mp[i - 'a'];
            mp[i - 'a'] = ans;
            ans = ans * 2 - seq;
        }
        return ans;
    }
    string betterString(string str1, string str2) {
           int a=distinctSubsequences(str1);
        int b=distinctSubsequences(str2);
        if(a>=b)return str1;
        return str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends