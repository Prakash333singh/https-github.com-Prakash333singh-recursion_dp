//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
          int n=matrix.size(); 

      vector<int>ans;   vector<vector<bool>>vis(n,vector<bool>(n,false));
             for(int I=0;I<n;I++){

            for(int j=0;j<n;j++) {

                if(!vis[I][j]){

                    int row=I;

                    int col=j;

                    while(row<n and col>=0 and !vis[row][col]) {

                        vis[row][col]=true;      ans.push_back(matrix[row][col]);

                       row++;

                        col--;

                    }

                }

            }

        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends