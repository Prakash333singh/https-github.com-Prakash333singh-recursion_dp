//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        int i=0,j=m-1,diff=INT_MAX; //arr[ ] = {1, 4, 5, 7} 
                                // brr[ ] = {10, 20, 30, 40} 
    //   vector<int>ans;
    int result_a,result_b;
       
      while(i<n && j>=0)
      {
          int sum= arr[i]+brr[j];  //31
           
           
           
          if(diff>abs(sum-x))   
          {      //
              diff=abs(sum-x);       //1
              result_a = arr[i];
                result_b = brr[j];  // {1,30}
          }
           
           
          if(sum>=x)  
          j--;      //j=2
           
           
          else
          i++;
      }
      return {result_a,result_b};
    

    
//   int closest_sum = INT_MAX;
//     int result_a, result_b;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             int current_sum = arr[i] + brr[j];
//             int diff = abs(current_sum - x);

//             if (diff < closest_sum) {
//                 closest_sum = diff;
//                 result_a = arr[i];
//                 result_b = brr[j];
//             }
//         }
//     }

//     return {result_a, result_b};
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends