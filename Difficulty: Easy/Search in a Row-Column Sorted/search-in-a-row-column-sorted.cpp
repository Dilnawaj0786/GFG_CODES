class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        for(int i=0;i<arr.size();i++){
            int st = 0;
            int end = arr[i].size()-1;
            while(st <= end){
                int mid = st + (end-st)/2;
                if(arr[i][end] >= x){
                    if(arr[i][mid] == x){
                        return true;
                    }else if(arr[i][mid] < x){
                        st = mid+1;
                    }else{
                        end = mid-1;
                    }
                }else{
                    break;
                }
            }
        }
        return false;
    }
};