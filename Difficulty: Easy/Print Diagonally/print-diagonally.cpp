class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        vector<int> ans;
        for(int i=0;i<=2*n-2;i++){
            for(int j= 0;j<n;j++){
                int k = i-j;
                if(k >= 0 && k < n){
                    ans.push_back(mat[j][k]);
                }
            }
        }
        return ans;
        
    }
};