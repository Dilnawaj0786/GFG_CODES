class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int end = arr.size()-1;
        int st = 0;
        vector<int> ans;
        while(st <= end){
            ans.push_back(arr[end]);
            if(st != end) ans.push_back(arr[st]);
            
            st++;
            end--;
        }
        return ans;
    }
};
