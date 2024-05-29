//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
       ///sabse phele visited array liya fir uske first element ko vis mark kar diya
       
        int vis[V]={0};
        vis[0]=1;
        
        
        //second thing i have taken a queue and push fisrt node into it 
        queue<int>q;
        q.push(0);
        
        //taken a answe vector to store our bfs traversal
        vector<int>ans;
        
        
        //run a loop until our q become empty
        
        while(!q.empty())
        {
            //taken a fornt node and then poped from the queue
            int node = q.front();
            q.pop();
            
            //insert the pop node into ans vector 
            ans.push_back(node);
            
            //traverse its all neighbours
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends