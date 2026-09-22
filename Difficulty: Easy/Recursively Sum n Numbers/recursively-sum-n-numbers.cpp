class Solution {
  public:
  int sum = 0;
    int recursiveSum(int n) {
        // Recursively sum from 1 to n and return
        // code here
        if(n == 0){
            return 0;
        }
        sum += n;
        recursiveSum(n-1);
        return sum;
    }
};