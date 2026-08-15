class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0;i<row;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        
    }
};
