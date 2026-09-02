class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int m = mat.size()-1;
        int n = mat[0].size()-1;
        
        for(int i=0;i<=m ;i++){
            for(int j=0;j<=n;j++){
                if(mat[i][j] == x){
                    return true;
                }
            }
        }
        return false;
        
    }
};