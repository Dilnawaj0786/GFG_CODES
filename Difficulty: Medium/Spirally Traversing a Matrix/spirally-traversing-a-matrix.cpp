class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &matrix) {
        // code here
        int last_row = matrix.size()-1;
        int last_col = matrix[0].size()-1;
        int first_row = 0;
        int first_col = 0;
        vector<int> ans;
        while(first_row <= last_row && first_col <= last_col){
            for(int i= first_col ;i<=last_col;i++){
                ans.push_back(matrix[first_row][i]);
            }
            first_row++;
            if((first_row > last_row) || (first_col > last_col)) break;
            for(int i= first_row ;i<=last_row;i++){
                ans.push_back(matrix[i][last_col]);
            }
            last_col--;
            if((first_row > last_row) || (first_col > last_col)) break;
            for(int i= last_col ;i>=first_col;i--){
                ans.push_back(matrix[last_row][i]);
            }
            last_row--;
            if((first_row > last_row) || (first_col > last_col)) break;
            for(int i= last_row ;i>=first_row;i--){
                ans.push_back(matrix[i][first_col]);
            }
            first_col++;
            if((first_row > last_row) || (first_col > last_col)) break;
        }
        return ans;

    }
};