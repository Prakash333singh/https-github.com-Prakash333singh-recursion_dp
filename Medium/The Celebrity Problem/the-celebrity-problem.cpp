//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int cel=0;
       for(int i=0;i<n;i++)
       if(M[cel][i]==1)
               cel=i;
         for(int i=0;i<n;i++){
              if(i==cel)
               continue;
           if(M[cel][i]==1||M[i][cel]==0)
             return-1;
           }
        return cel;
        
        //  vector<int>adj[n+1];
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(M[i][j]==1){
        //             adj[i].push_back(j);
        //         }
        //     }
        // }
        // vector<int>::iterator it;
        // for(int i=0;i<n;i++){
        //     if(adj[i].empty()){
        //         bool flag=1;
        //         for(int j=0;j<n;j++){
        //             if(i==j)continue;
        //             it=find(adj[j].begin(),adj[j].end(),i);
        //             if(it==adj[j].end()){
        //                 flag=0;
        //                 break;
        //             }
        //         }
        //         if(flag)return i;
        //     }
        // }
        // return -1;
        
        // stack<int>s;
        // for(int i=n-1;i>=0;i--)
        // {
        //     s.push(i);
        // }
        // while(s.size()>1)
        // {
        //     int first=s.top();
        //     s.pop();
        //     int second=s.top();
        //     s.pop();
        //     if(M[first][second] && !M[second][first])
        //     s.push(second);
        //     else if(!M[first][second] && M[second][first])
        //     s.push(first);
        // }
        
        // if(!s.empty())
        // return -1;
        
        // int num=s.top();
        // s.pop();
        
        // int row=0,col=0;
        // for(int i=0;i<n;i++)
        // {
        //     row+=M[num][i];
        //     col+=M[i][num];
        // }
        // return row==0 && col ==n-1 ? num : -1;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends