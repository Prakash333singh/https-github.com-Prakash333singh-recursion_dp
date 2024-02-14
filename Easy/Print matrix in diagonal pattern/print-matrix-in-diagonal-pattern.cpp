//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int m=mat.size();
         int n=mat[0].size();
         
         
         map<int,vector<int>>mp;
         vector<int>result;
         
         //fill the map using [i+j]
         
         for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         
         bool flip=true;
         
         for(auto &it :mp){
             if(flip){
                 //it.second ko reverse kardo
                 reverse(it.second.begin(),it.second.end());
             }
             
             for(int &num :it.second){
                 result.push_back(num);
             }
             
             flip=!flip;
         }
         return result;
         
    }
    
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends