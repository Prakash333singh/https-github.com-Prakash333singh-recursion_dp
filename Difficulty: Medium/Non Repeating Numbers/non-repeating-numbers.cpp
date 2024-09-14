//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
// 1. First we do xor of all the numbers through which the xor
// all the repeated numbers become zero and the ans is gonna be the xor
// of remaining two numbers .

// 2. Now the problem arises how to get the two numbers from its xor.

// 3.Here is the solution that we will find the rightmostset bit and apply 
// & operation with all the elements and divide the elements into two parts :
// one which gives 0 with the & operation and other one which doesn't.

// 4.Then if i do xor operation of the two parts i can see that 
//the i get the two numbers from two parts .... which is the answer.


    vector<int> singleNumber(vector<int> nums) 
    {
           int xor2no = INT_MIN;

    // Step 1: Find XOR of the two unique numbers (a ^ b)
    for(int x : nums){
        xor2no ^= x;
    }

    // Step 2: Find the lowest set bit (bit that differs between a and b)
    int lowestsetbit = xor2no & -xor2no;

    // Step 3: Initialize result array
    vector<int> ans(2, 0);

    // Step 4: Separate numbers into two groups and XOR them
    for(auto y : nums){
        if((lowestsetbit & y) == 0){
            ans[0] ^= y;
        } else {
            ans[1] ^= y;
        }
    }
    sort(ans.begin(),ans.end());
    //2log(2)

    // Step 5: Return the two unique numbers
    return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends