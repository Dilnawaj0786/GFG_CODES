class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int k = 2;
        while(k> 0){
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<=i;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<mat.size();i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            k--;
        }
    }
};