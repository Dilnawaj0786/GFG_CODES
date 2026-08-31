class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int idx = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
};
