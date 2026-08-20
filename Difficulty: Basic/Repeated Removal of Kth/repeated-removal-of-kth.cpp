class Solution {
  public:
    int getCandidate(int n, int a) {
        // code here
        int k = a;
        while( k <= n){
            k *= a;
        }
        return k/a;
    }
};