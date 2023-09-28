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
// one which gives gives 0 with the & operation and other one which doesn't.

// 4.Then if i do xor operation of the two parts i 
// can see that the i get the two numbers from two parts .... which is the answer.


    vector<int> singleNumber(vector<int> nums) 
    {
        int xxory=0;
        
        for(auto it: nums)
        xxory=xxory^it;
        int number=xxory & -xxory;
        int x=0;
        int y=0;
        for(auto it:nums){
            if(it & number){
                x=x^it;
            }
            else{
                y=y^it;
            }
        }
        nums.clear();
        if(x>y){
            nums.push_back(y);
            nums.push_back(x);
            return nums;
        }
        else{
            nums.push_back(x);
            nums.push_back(y);
            return nums;
        }
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