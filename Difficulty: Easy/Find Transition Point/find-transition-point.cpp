class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int idx = -1;
        int st =0;
        int n = arr.size();
        int end = n-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] == 1){
                idx = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return idx;
    }
};