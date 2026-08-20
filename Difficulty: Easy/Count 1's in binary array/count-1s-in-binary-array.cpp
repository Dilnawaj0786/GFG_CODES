class Solution {
  public:
    int countOnes(vector<int>& arr) {
        // code here
        int idx = -1;
        int st = 0;
        int end = arr.size()-1;
        while( st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] == 0){
                end = mid-1;
            }else{
                idx = mid;
                st = mid+1;
            }
        }
        return idx+1;
    }
};