//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        
//         We use a while loop to iterate through the bits 
//         of the integer N. The loop continues until N becomes 0.

// Inside the loop, we use a bitwise AND operation N & 1 to check 
// if the rightmost bit of N is set (equals 1). 
// If it is, we increment the count variable.

// We then right-shift N by 1 bit using N >>= 1 to examine the next bit.

// The loop continues this process until all bits of N have been examined.

// Finally, we return the value of count, which 
// represents the count of set bits in the integer N.

//using stl
int num=__builtin_popcount(N);
return num;

// int count = 0;
//     while (N > 0) {
//         // Use bitwise AND to check if the rightmost bit is set (equals 1)
//         if (N & 1) {
//             count++;
//         }
//         // Right shift N by 1 to examine the next bit
//         N >>= 1;
//     }
//     return count;
        
        //positon of first set bit
        // if(N==0)
        // return -1;
        // if(N&N-1==0)
        // return log2(N)+1;
        // else
        // return -1;
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