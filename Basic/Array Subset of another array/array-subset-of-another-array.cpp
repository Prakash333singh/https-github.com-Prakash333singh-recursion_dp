//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int arr1[], int arr2[], int n, int m) {
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;++i){
        if(mp[arr2[i]] == 0) return "No"; //if we run out of element or it was not present in arr1, then return false
        mp[arr2[i]]--; //decrease count by 1 as we have matched it with current arr2[i]
    }
    return "Yes";
}