//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
       int maximum_ones=0,no_of_zeros=0,count=0;
       for(int i=0;i<n;i++)
       {
           ///if count = 0
           if(no_of_zeros < 0)
           no_of_zeros=0;
           
    
             if(a[i]==0)
               {
                   no_of_zeros++;
                   maximum_ones=max(maximum_ones,no_of_zeros);
               }
               else
               {
                   count++;
                   no_of_zeros--;
               }
           
       }
       return (count+maximum_ones);
    }
};



//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends