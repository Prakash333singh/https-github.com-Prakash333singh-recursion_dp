class Solution {
  public:
//         int n=arr.size();
        // int start,end;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         swap(arr[i][j],arr[j][i]);
        //     }
        // }
        
        // for(int i=0;i<n;i++){
        //     start=0,end=n-1;
        //     while(start<end){
        //         swap(arr[i][start],arr[i][end]);
        //         start++,end--;
        //     }
            
        // }
        
        
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        //so in this question my approach is simple the swap the columns and then 
        //swap the rows will be get the desired output
        
        //first step
        //swap the colums 
        int n=mat.size();
        for(int j=0; j<n; j++){
            for(int i=0; i<n/2; i++){
                swap(mat[j][i],mat[j][n-1-i]);
            }
        }
        //second step
        //swap the rows 
        for(int i=0; i<n/2; i++){
            swap(mat[i], mat[n-1-i]);
        }
        
        //Step 1: O(n²)

        // Step 2: O(n²)
            
        // Total = O(n²)
    }
};