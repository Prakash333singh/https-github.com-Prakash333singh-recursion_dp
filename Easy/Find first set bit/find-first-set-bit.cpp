//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
       // If N is 0, return 0
    // if (N == 0) {
    //     return 0;
    // }

    // int position = 1;  // Initialize the position
    // int mask = 1;      // Initialize a mask with the rightmost bit set

    // // Iterate through the bits of N
    // while (!(N & mask)) {
    //     // Left-shift the mask to check the next bit
    //     mask = mask << 1;
    //     position++;
    // }

    // return position;
     int count=1;
        while(n>0 ){
            if((n&1)==1)return count;
            n>>=1;
            count++;
            
        }
            return 0;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends