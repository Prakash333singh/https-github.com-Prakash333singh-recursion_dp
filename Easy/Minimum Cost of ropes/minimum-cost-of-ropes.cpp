//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
//         long long totalcost=0;
//     sort(arr,arr+n);
// 	for(int i=1;i<n;i++)
// 	 {
// 		long long newrope=arr[i-1]+arr[i];
// 		totalcost+=newrope;

// 		arr[i]=newrope;

// 	 }
	 
// 	return totalcost;
priority_queue<long long ,vector<long long >,greater<long long>>minheap;
	for(int i=0;i<n;i++)
	{
		minheap.push(arr[i]);
	}
	long long cost=0;
	while( minheap.size()>=2)
	{
	  long long first=minheap.top();
		minheap.pop();
	long long second=minheap.top();
		minheap.pop();
		cost+=first+second;
		minheap.push(first+second);
	}
	return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends