class Solution {
  public:
    int findK(vector<vector<int>> &ans, int k) {
        // code here.
      int min_row = 0;
      int min_col = 0;
      int max_row = ans.size()-1;
      int max_col = ans[0].size()-1;
      int count = 1;
      while(min_row <= max_row && min_col <= max_col){
            for(int i=min_col;i<=max_col;i++){
                if(count == k){
                     return ans[min_row][i];
                }
                count++;
            }
            min_row++;
            if(min_row > max_row || min_col > max_col) break;
            for(int i=min_row;i<=max_row;i++){
               if(count == k) return ans[i][max_col]; 
                count++;
            }
            max_col--;
            if(min_row > max_row || min_col > max_col) break;
            for(int i=max_col;i>=min_col;i--){
                if(count == k) return ans[max_row][i];
                count++;
            }
            max_row--;
            if(min_row > max_row || min_col > max_col) break;
            for(int i=max_row;i>=min_row;i--){
                if(count==k) return ans[i][min_col];
                count++;
            }
            min_col++;
            if(min_row > max_row || min_col > max_col) break;
        }
        return -1;
    }
};