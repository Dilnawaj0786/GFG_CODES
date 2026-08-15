class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total = 0;
        for(int ele : arr){
            total += ele;
        }
        int count =0;
        int flag = -1;
        int left =0;
        
        for(int i=0;i<arr.size();i++){
            int right = total - left-arr[i];
            
            if(right == left){
                return i;
            }
            
            left += arr[i];
        }
        if(flag == -1) return -1;

    }
};