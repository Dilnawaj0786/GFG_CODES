class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code 
        int n = arr.size();
        int max_ele = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i] > max_ele) max_ele = arr[i];
        }
        vector<int> freq(max_ele+1,0);
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
        int count = 0;
        for(int i=0;i<freq.size();i++){
            if(freq[i] > n/k){
                count++;
            }
        }
        return count;
    }
};