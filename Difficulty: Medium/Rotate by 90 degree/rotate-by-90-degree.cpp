class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
         // Performing Transpose
         int n=mat.size();
    
         //it is obtained by 2 steps 
         //do transpose of the givne matrix
         //swap crossponding rows 
    for (int i = 0; i < n; i++){
         for (int j = i; j < n; j++)
          swap(mat[i][j], mat[j][i]); 
    } 
           
     for(int i=0;i<(n/2);i++){
            for(int j=0;j<n;j++){
                   swap(mat[i][j],mat[n-1-i][j]);
            }
        }
        
    }
};
