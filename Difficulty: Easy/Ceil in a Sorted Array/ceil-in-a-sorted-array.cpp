class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n =arr.size();
        int end = n-1;
        int st = 0;
        int cl = -1;
        while(st <= end){
            int mid = st +(end-st)/2;
            if(arr[mid] >=x){
                cl = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return cl;
    }
};