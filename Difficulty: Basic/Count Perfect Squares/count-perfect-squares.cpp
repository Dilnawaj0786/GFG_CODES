class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count = 1;
        for(int i = 2;i<sqrt(n);i++){
            if(i*i < n) count++;
        }
        return count;
    }
};