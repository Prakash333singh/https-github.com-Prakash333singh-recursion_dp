//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    
	    
	  int cnt = 0;

// Loop through all vertices
for (int i = 0; i < V; i++) {
    // Check if the degree of the current vertex is even
    if (adj[i].size() % 2 == 0) {
        cnt++;
    }
}

// If all vertices have even degree, return 2 (Eulerian Circuit)
if (cnt == V) {
    return 2;
}

// If exactly two vertices have odd degree, return 1 (Eulerian Path)
if (cnt == V - 2) {
    return 1;
}

// If the above conditions are not met, return 0 (None of the above)
return 0;

// int cnt = 0;: Initialize a counter variable cnt
// to keep track of vertices with even degrees.

// for (int i = 0; i < V; i++) { ... }: Loop through all vertices in the graph.

// if (adj[i].size() % 2 == 0) { cnt++; }: Check if the degree
// (number of adjacent edges) of the current vertex i is even.
// If it is, increment the cnt variable.

// After the loop, the code checks the value of cnt:

// If cnt is equal to the total number of vertices (V), it 
// means that all vertices have even degrees. In this case, the graph has
// an Eulerian Circuit, so it returns 2.

// If cnt is equal to V - 2, it means that exactly two vertices 
// have odd degrees. In this case, the graph has an Eulerian Path, so it returns 1.

// If the above conditions are not met, it means that the graph
// does not have an Eulerian Circuit or Eulerian Path, so it returns 0.

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends