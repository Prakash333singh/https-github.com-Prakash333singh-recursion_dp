//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
         string result = "";
      while (n > 0) {
         n--; // Make it 0-indexed
        char currentChar = 'A' + (n % 26);
        result += currentChar;
        n /= 26;
    }
     reverse(result.begin(), result.end());
    return result;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	
cout << "~" << "\n";
}
}

// } Driver Code Ends