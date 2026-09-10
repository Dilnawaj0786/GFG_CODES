class Solution {
  public:
    void subset(int idx,vector<int> ans,vector<int>& arr,vector<vector<int>>& fl){
        if(idx == arr.size()){
            fl.push_back(ans);
            return;
        }
        subset(idx+1,ans,arr,fl);
        ans.push_back(arr[idx]);
        subset(idx+1,ans,arr,fl);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        vector<vector<int>> fl;
        subset(0,ans,arr,fl);
        vector<int> sums;
        for(int i=0;i<fl.size();i++){
            int sum = 0;
            for(int j=0;j<fl[i].size();j++){
                sum += fl[i][j];
            }
            sums.push_back(sum);
        }
        return sums;
    }
};