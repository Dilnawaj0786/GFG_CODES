class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int mini = arr[0];
        int idx = 0;
        int st = 0;
        int end = arr.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] < mini){
                end = mid-1;
                mini = arr[mid];
                idx = mid;
            }else{
                st = mid+1;
            }
        }
        return idx;
    }
};
