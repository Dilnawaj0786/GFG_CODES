class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n){
            reverse(arr.begin(),arr.end());
        }else{
            int i = 0;
            while( i <= n){
                int end = min(i + k, n);
                reverse(arr.begin()+i,arr.begin()+end);
                i += k;
            }
        }
    }
};
