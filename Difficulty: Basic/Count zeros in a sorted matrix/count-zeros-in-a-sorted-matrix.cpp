//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int count = 0;
        for(int i=0;i<mat.size();i++){
            int st =0;
            int end = mat[i].size()-1;
            int idx = -1;
            while( st <= end){
                int mid = st + (end-st)/2;
                if(mat[i][mid] == 0){
                    idx = mid;
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
            count += (idx+1);
            idx = -1;
        }
        
        return count;
        
    }
};