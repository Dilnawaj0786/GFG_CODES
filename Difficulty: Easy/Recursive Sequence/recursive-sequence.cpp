class Solution {
  public:
  long long sum = 0;
  int count = 1;
  long long prod = 1;
  int k =1;
    long long  sequence(int n) {
        // code here
        int x = k;
        if(n== 0){
            return sum;
        }
        prod = 1;
        while(k> 0){
           prod = (prod * count) % 1000000007;
           count++;
           k--;
        }
        k = x+1;
        sum = (sum + prod) % 1000000007;
        return sequence(n-1);
    }
};