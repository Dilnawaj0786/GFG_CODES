class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int st = 0;
        int end = n-1;
        if( n == 1){
            return arr[0];
        }
        int d;
        int firstDiff = arr[1] - arr[0];
        int lastDiff = arr[n - 1] - arr[n - 2];
        if (abs(firstDiff) < abs(lastDiff)) {
            d = firstDiff;
        } else if (abs(lastDiff) < abs(firstDiff)) {
            d = lastDiff;
        } else {
            d = firstDiff;
        }
        
        while(st <= end){
            int mid = st + (end-st)/2;
            int ans = arr[0] + (mid*d);
            
            if(arr[mid] == ans){
                st = mid+1;
            }else{
                end = mid-1;
            }
            
        }
        
        return arr[0]+( st*d);
    }
};