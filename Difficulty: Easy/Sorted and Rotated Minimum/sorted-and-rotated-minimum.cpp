class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int ans = arr[0];
        int st = 0;
        int end = arr.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] < ans){
                ans = arr[mid];
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};