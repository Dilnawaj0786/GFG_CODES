class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int st = 0;
        int end = n-1;
        int ub = n;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] > target){
                ub = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ub;
    }
};
