class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int count = 0;
        int st =0;
        int idx = -1;
        int end = arr.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] == 1){
                st = mid+1;
            }else{
                idx = mid;
                end = mid-1;
            }
        }
        
        if (idx != -1){
            count = (arr.size()-1)-idx +1;
            return count;
        }else{
            return 0;
        }
    }
};