class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        
        // code here
        int n = arr.size();
        int end = n-1;
        int st = 0;
        int fl = -1;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] <= x){
                fl = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return fl;
        
        
    }
};
