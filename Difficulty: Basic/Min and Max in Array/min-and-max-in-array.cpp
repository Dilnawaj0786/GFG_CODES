class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans;
        int max_ele = INT_MIN;
        int min_ele = INT_MAX;
        for(int ele : arr){
            if(ele > max_ele) max_ele = ele;
            if(ele < min_ele) min_ele = ele;
        }
        ans.push_back(min_ele);
        ans.push_back(max_ele);
        return ans;
    }
};