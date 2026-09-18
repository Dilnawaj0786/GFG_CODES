class Solution {
  public:
  int count = 0;
    int countDigits(int n) {
        // Code here
        if(n == 0) return count;
        count++;
        countDigits(n/10);
    }
};