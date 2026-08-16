class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            int x = arr[i];
            int reverse = 0;
            while( x != 0){
                reverse *= 10;
                int rem = x % 10 ;
                reverse += rem;
                x /= 10;
            }
            if(reverse != arr[i]){
                return false;
            }
        }
        return true;
    }
};