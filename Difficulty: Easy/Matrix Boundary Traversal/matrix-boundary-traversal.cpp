class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        int min_row =0;
        int max_row = mat.size()-1;
        int min_col = 0;
        int max_col = mat[0].size()-1;
        vector<int> ans;
        for(int i=min_col;i<=max_col;i++){
            ans.push_back(mat[min_row][i]);
        }
        min_row++;
        if(min_row>max_row || min_col > max_col) return ans;
        for(int i=min_row;i<=max_row;i++){
            ans.push_back(mat[i][max_col]);
        }
        max_col--;
        if(min_row>max_row || min_col > max_col) return ans;
        for(int i=max_col;i>=min_col;i--){
            ans.push_back(mat[max_row][i]);
        }
        max_row--;
        if(min_row>max_row || min_col > max_col) return ans;
        for(int i=max_row;i>=min_row;i--){
            ans.push_back(mat[i][min_col]);
        }
        return ans;
    }
};
