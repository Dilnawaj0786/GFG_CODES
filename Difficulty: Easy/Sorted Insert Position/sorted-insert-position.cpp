class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int st =0;
        int end = n-1;
        int idx = n;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] >= k){
                idx = mid;
               end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
};