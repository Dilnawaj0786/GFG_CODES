class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<int> idx_i;
        vector<int> idx_j;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 0){
                    idx_i.push_back(i);
                    idx_j.push_back(j);
                }
            }
        }
        
        for(int row : idx_i){
            for(int j=0;j<mat[0].size();j++){
                mat[row][j] = 0;
            }
        }
        
        for(int col : idx_j){
            for(int i=0;i<mat.size();i++){
                mat[i][col] = 0;
            }
        }
        
    }
};