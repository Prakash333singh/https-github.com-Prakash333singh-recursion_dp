//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insertAtBottom(stack<int> &s, int item) {
    // Base case: if the stack is empty, simply push the item onto it
    if (s.empty()) {
        s.push(item);
    } else {
        // Recursive step: pop all elements from the stack and insert the item at the bottom
        int temp = s.top();
        s.pop();
        insertAtBottom(s, item);
        s.push(temp);
    }
}
    void Reverse(stack<int> &s){
          if (!s.empty()) {
        int item = s.top();
        s.pop();
        // Recursively reverse the remaining stack
        Reverse(s);
        // Insert the popped item at the bottom of the reversed stack
        insertAtBottom(s, item);
    }
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends