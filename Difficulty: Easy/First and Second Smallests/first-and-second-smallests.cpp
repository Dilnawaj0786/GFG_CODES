class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector<int> ans;
        int s = INT_MAX;
        int ss = INT_MAX;
        for(int ele : arr){
            if(ele < s) s = ele;
        }
        
        for(int ele : arr){
            if(ele < ss && ele > s) ss = ele;
        }
        
        if(ss == INT_MAX){
            ans.push_back(-1);
        }else{
            ans.push_back(s);
            ans.push_back(ss);
        }
        return ans;
    }
};