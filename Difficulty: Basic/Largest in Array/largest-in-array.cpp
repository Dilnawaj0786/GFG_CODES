class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = INT16_MIN;
        for(int ele : arr){
            if(ele > max) max = ele;
        }
        return max;
    }
};
