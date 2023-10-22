//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // int count=0;
       
        // unordered_map<int ,int>mp;
        
        // for(int i=0;i<n;i++){
        //     mp[a[i]]++;
        // }
        // for(int i=0;i<m;i++){
        //     if(mp.find(b[i])!=mp.end())
        //     count++;
        //       mp.erase(b[i]);
        // }
        // return count;
        int count=0;
        unordered_set<int>s1(a,a+n);
        unordered_set<int>s2(b,b+m);
        
        for(auto &x :s2){
           if(s1.find(x)!=s1.end())
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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends