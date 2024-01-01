//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
     long long int max_sum= INT_MIN;
    long long int sum=0;
   long long int last=0;
    long long int i=0;
    
    for( long long int j=0;j<n;j++) {
        sum+=a[j]; // sum up krte jao
        
        if(j-i+1==k)
        max_sum= max(max_sum,sum); //window size agar K hai jaab taak, yahi krna padega, no option
        
        else if(j-i+1 > k) {
            max_sum= max(max_sum,sum); //check kro if faida hua hai ki nhi, store krlo
            last+=a[i]; //aage se bando ko add krte chalo
            i++; // front++
            
            
            if(last<0) {    // agar ye aage ke bando ka sum negaive ho gya kisi point pe, we dont need them anymore
                sum-=last;  // sum se subtract kro
                max_sum= max(sum,max_sum);  // max_sum update kro
                last=0; // last's work is done for now, re-initialize it to 0 
            }
        }
    }
    return max_sum;  // return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends