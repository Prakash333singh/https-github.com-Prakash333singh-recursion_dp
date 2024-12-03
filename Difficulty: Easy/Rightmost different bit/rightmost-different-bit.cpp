//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n)return -1;
        int position=1;
        
        // XOR operation sets a bit to 1 wherever the bits of m and n differ.
        int xorVal= m^n;
        //1011^1001 =0010
        
        while((xorVal&1)==0){// Check if the least significant bit is 0
              xorVal = xorVal >> 1;  // Right shift xorVal to examine the next bit
              position++;  
        }
        return position;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    
cout << "~" << "\n";
}
    return 0;     
} 
// } Driver Code Ends