//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    
  public:
  void solve(vector<vector<int>> &matrix, int i, int j, string path, vector<string> &ans, int row, int column) {
      
    // Checking if the current cell is out of bounds
    if (i < 0 || i >= row || j < 0 || j >= column) {
        return;
    }

    // Checking if the current cell is blocked
    if (matrix[i][j] == 0) {
        return;
    }

    // If the destination is reached, add the path to the result
    if (i == row - 1 && j == column - 1) {
        ans.push_back(path);
        return;
    }

    // Marking the current cell as visited
    matrix[i][j] = 0;

    // Exploring all four possible directions
    // Up
    solve(matrix, i - 1, j, path + 'U', ans, row, column);
    // Down
    solve(matrix, i + 1, j, path + 'D', ans, row, column);
    // Left
    solve(matrix, i, j - 1, path + 'L', ans, row, column);
    // Right
    solve(matrix, i, j + 1, path + 'R', ans, row, column);

    // Backtracking: Unmark the current cell
    matrix[i][j] = 1;
  }

 // Function to find all possible paths
vector<string> findPath(vector<vector<int>> &mat) {
    
    //ans vector to store paths 
    vector<string> ans;

    // Edge case: If the matrix is empty or starting point is blocked
    if (mat.empty() || mat[0][0] == 0) {
        return ans;
    }

    int row =mat.size();
    int column=mat[0].size();
    string path= "";
  

    // Start the recursive function from the top-left corner (0, 0)
    solve(mat, 0, 0, path, ans, row, column);

    return ans;
   }

 };


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends