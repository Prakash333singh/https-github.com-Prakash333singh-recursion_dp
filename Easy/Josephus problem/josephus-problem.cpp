//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
         if (n == 1) {
        return 1;
    } else {
        // The Josephus problem has a recursive solution:
        // The safe position in a circle of size n with a step of k is given by:
        // f(n, k) = (f(n - 1, k) + k - 1) % n + 1
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // queue<int> q;
    //   for(int i=1;i<=n;i++)
    //   {
    //       q.push(i);
    //   }
    //   int count=1;
    //   while(1)
    //   {
    //       if(q.size()==1)
    //       {
    //           break;
    //       }
    //       if(count<k)
    //       {
    //           int num=q.front();
    //           q.pop();
    //           q.push(num);
    //           count=count+1;
    //       }
    //       else if(count==k)
    //       {
    //           q.pop();
    //           count=1;
    //       }
    //   }
    //   return q.front();
      
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends