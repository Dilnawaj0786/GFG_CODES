class Solution {
  public:
  bool ishappy(int x){
        int sum = 0;
        while(x != 0){
            int digit = x % 10;
            int sq = digit*digit;
            sum += sq;
            x = x/10;
        }
        if(sum == 1){
            return true;
        }
        if(sum == 4) return false;
        ishappy(sum);
    }
    int nextHappy(int n) {
        // code here
        n++;
        if(ishappy(n)) return n;
        return nextHappy(n);
    }
};