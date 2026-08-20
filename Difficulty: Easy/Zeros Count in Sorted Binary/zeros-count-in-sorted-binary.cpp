class Solution {
  public:
    int countZeroes(vector<int>& arr) {
        // code here
        int st =0;
        int n = arr.size();
        int end = arr.size()-1;
        int idx = n;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] == 1){
                st = mid+1;
            }else{
                idx = mid;
                end = mid-1;
            }
        }
        return n-idx;
    }
};