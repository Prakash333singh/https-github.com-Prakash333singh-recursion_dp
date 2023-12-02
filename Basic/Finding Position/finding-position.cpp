//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   bool sex(int n)
  {
      if(n==0||n==1) return true;
      if(n%2==0)
      sex(n/2);
      else return false;
  }
    long long int nthPosition(long long int n){
     for(int i=n;i>=1;i--)
     if(sex(i))return i;
     return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.nthPosition(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends