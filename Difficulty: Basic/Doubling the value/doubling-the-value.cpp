class Solution {
  public:
    int solve(int b, vector<int> &arr) {
        // code here.
        for(int ele : arr){
            if(ele == b){
                b = ele *2;
            }
        }
        return b;
    }
};