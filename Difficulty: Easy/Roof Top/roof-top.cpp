class Solution {
  public:
    int maxStep(vector<int>& arr) {
        // code here
        int max_step = 0;
        int ele = arr[0];
        int step = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i] > ele){
                step++;
                ele = arr[i];
                max_step = max(step,max_step);
            }else{
                max_step = max(step,max_step);
                ele = arr[i];
                step = 0;
            }
        }
        return max_step;
    }
};