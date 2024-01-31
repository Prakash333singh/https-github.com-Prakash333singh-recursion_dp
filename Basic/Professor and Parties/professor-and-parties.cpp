//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    string PartyType(long long int arr[], int n)
    {
        // Your code goes here
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=1;j<n-1;j++)
        //     {
        //         if(arr[i]!=arr[j])
        //          return "GIRLS";
        //     }
        // }
        // return "BOYS";
        https://media.geeksforgeeks.org/img-practice/prod/courses/5/Web/Content/Clock-4_1706701529.gif
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.find(arr[i])!=s.end())
            return "BOYS";
            else
            s.insert(arr[i]);
        }
        return "GIRLS";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long int a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        Solution ob;
        cout<< ob.PartyType(a, n) <<endl;
        
    }
    return 0;
}

// } Driver Code Ends