//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
   
//   -> generate window of size k with the help of nested loops , store 1st negative element of every window.

// for(i=0 to n-1):

//      for(j=i to i+k-1):

//          if(arr[j] < 0 )  : ans.push_back(arr[j]) , break

// TC : O(N*K) {worst case , k=N}

// SC : O(N-k-1) {No. of windows}

// Optimal
// -> use queue along with fixed size sliding window.

// -> if arr[j] < 0 : push it in queue.

// -> keep on expanding window , till its size < k.

// ->if (size==k): 

//       //check for ans

//       store front of queue in ans.

//       if (queue.empty) store 0

//       //trim

//       if(arr[i] < 0) queue.pop()

//       i++

 

// TC : O(N)

// SC : O(N-k-1 + M ) {No. of windows + queue}
long long i=0,j=0;
vector<long long>ans;
queue<long long>q;
while(j<n)
{
    if(arr[j]<0){
        q.push(arr[j]);
    }
    
    if(j-i+1<k)
    j++;
    
    else if(j-i+1==k)
    {
        if(q.size()==0)
        {
            ans.push_back(0);
            i++;j++;
            continue;
        }
        else
        {
            int value=q.front();
            ans.push_back(value);
            if(arr[i]<0){
                q.pop();
            }
        }
        i++;
        j++;
    }
    
}

  return ans;                                               
 }