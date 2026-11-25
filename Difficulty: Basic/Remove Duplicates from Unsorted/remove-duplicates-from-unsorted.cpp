class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int> freq(1000001);
        for(int ele : arr) freq[ele]++;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]] > 0) ans.push_back(arr[i]);
            freq[arr[i]] = 0;
        } 
        return ans;
    }
};