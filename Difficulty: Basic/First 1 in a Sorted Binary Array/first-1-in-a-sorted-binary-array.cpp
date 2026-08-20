class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here
        int n = arr.size();
        int st =0;
        int end = n-1;
        int ans = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] == 0){
                st = mid+1;
            }else if(arr[mid] == 1){
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};