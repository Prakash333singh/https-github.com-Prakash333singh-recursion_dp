//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long func(int n) {
        if (n < 1) {
            return 0;
        }
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        } else {
            return func(n - 2) * func(n - 2) - func(n - 1);
        }
    }
    void gfSeries(int N)
    {
          for (int i = 1; i <= N; ++i) {
            std::cout << func(i) << " ";
        }
        std::cout << std::endl;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends