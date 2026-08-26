class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int firstidx = -1;
        int secondidx = -1;
        int st =0;
        int n = arr.size();
        int end = n-1;
        bool flag = false;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] < target){
                st = mid+1;
            }else if(arr[mid] >= target){
                flag = true;
                firstidx = mid;
                end = mid-1;
            }
        }
        
        st =0;
        end = n-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] <= target){
                secondidx = mid;
                st = mid+1;
            }else if(arr[mid] > target){
                end = mid-1;
            }
        }
        
        if(flag) return (secondidx-firstidx+1);
        else return 0;
    }
};
