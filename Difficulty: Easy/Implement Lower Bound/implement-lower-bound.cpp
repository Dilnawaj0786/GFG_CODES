class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        int st =0;
        int end = n-1;
        int lb = n;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            
            if(arr[mid] >= target){
                lb = mid;
                end = mid-1;
            }else{
                
                st = mid+1;
            }
        }
        return lb;
    }
};
