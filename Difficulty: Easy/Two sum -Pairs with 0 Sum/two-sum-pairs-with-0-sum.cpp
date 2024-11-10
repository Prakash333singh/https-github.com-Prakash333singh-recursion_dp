//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
    //     set<vector<int>> uniquePairs;

    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i + 1; j < arr.size(); j++) {
    //         if (arr[i] + arr[j] == 0) {
    //             vector<int> pair = {min(arr[i], arr[j]), max(arr[i], arr[j])};
    //             uniquePairs.insert(pair);
    //         }
    //     }
    // }

    // vector<vector<int>> result(uniquePairs.begin(), uniquePairs.end());
    
    
    // return result;
    
    set<int> seen;
    set<vector<int>> uniquePairs;

    for (int x : arr) {
        if (seen.count(-x)) { // Check if -x exists in seen
            vector<int> pair = {min(x, -x), max(x, -x)};
            uniquePairs.insert(pair);
        }
        seen.insert(x);
    }

    vector<vector<int>> result(uniquePairs.begin(), uniquePairs.end());
    return result;
    }
};

//{ Driver Code Starts.
//Back-end complete function Template for C++

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        // char c;cin>>c;
        Solution obj;
        vector<vector<int>> res = obj.getPairs(arr);
        if (res.size() == 0) {
            cout << endl;
        } else
            Matrix::print(res);
        cout << "~" << endl;
    }
}

// } Driver Code Ends