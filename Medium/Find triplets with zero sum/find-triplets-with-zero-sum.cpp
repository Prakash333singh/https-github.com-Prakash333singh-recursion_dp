//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
     bool findTriplets(int arr[], int n) {
   bool found = false;

   for (int i = 0; i < n - 1; i++) {

     unordered_set < int >hash;
     
     for (int j = i + 1; j < n; j++)
     {
         
       int x = -(arr[i] + arr[j]);
       
       if (hash.find(x) != hash.end()) 
       {
         found = true;
         break;
       }
        else
         hash.insert(arr[j]);
     }
     if (found) break;

   }
   return found;
 }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends