class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int st =1;
        int end = arr.size()-2;
        while( st <= end){
            int mid = st + (end-st)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return arr[mid];
            }else if(arr[mid] < arr[mid+1]){
                st = mid+1;
            }else if(arr[mid] < arr[mid-1]){
                end = mid-1;
            }
        }
        if(arr[0] > arr[arr.size()-1]){
            return arr[0];
        }else{
            return arr[arr.size()-1];
        }
    }
};