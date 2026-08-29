class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        vector<vector<int>> ans;
        // code here
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        vector<int> freq(max-min+1,0);
        for(int i=0;i<arr.size();i++){
            freq[arr[i]-min]++;
        }
        
        for(int i=0;i<freq.size();i++){
            if(freq[i] > 0){
                 vector<int> newans;
                newans.push_back(i+min);
                newans.push_back(freq[i]);
                ans.push_back(newans);
            }
        }
        return ans;
    }
};