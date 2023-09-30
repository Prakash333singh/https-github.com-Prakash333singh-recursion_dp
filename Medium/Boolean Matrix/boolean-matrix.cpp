//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        if(matrix.empty()||matrix[0].empty()){
            return;
        }
        
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        vector<bool>row_flags(rows,false);
        vector<bool>col_flags(cols,false);
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==1)
                {
                    row_flags[i]=true;
                    col_flags[j]=true;
                }
            }
        }
          for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if (row_flags[i] || col_flags[j]) {
                matrix[i][j] = 1;
            }
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends