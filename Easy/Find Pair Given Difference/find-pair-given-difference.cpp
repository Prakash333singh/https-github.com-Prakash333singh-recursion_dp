//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int N){
unordered_set<int> numSet;

    for (int i=0;i<size;i++) {
        // Check if there exists an element in the set whose difference with the current element is N
        if (numSet.find(arr[i] - N) != numSet.end() || numSet.find(arr[i]+ N) != numSet.end()) {
            return true;
        }

        // Add the current element to the set
        numSet.insert(arr[i]);
    }

    return false; // No p
    
}