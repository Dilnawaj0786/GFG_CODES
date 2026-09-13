class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(p == 0){
            return 1;
        }
        long long ans =  recursivePower(n,p/2);
        if(p % 2 == 0){
            return ans * ans;
        }else{
             return ans * ans * n;
        }
    }
};
