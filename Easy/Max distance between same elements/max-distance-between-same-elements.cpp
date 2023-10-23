//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    
      unordered_map<int,int>firstoccurance;
      //element ,firstoccurance
      
      int maxi=0;
      
      // 1 1 2  2  2  1
      // 0   2     4  5     max=(5-0,4-2)=5(ans)
      
      //basecially es problem mai phle hum first occurance of element ko store
      //kar lenge map mai agar mil jata hai tuo diff nikal lenge current index -
      //firstoccurance index aur update kar denge maxi ko last mai max ko return akr denge; 
      
      for(int i=0;i<n;i++)
      {
        if(firstoccurance.find(arr[i])!=firstoccurance.end())
        {
            maxi= max(maxi,i-firstoccurance[arr[i]]);
        }
        else
        firstoccurance[arr[i]]=i;
      }
      return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends