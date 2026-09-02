class Solution {
  public:
    int numberCount(int n, int k) {
        // code here
        if(k == 0) return n;
        int st = 10;
        int end = n;
        
        int ans = n+1;

        while( st <= end){
            int mid = st + (end-st)/2;
            int sum = 0;
            int temp = mid;
            while( temp != 0){
                sum += temp % 10;
                temp /= 10;
            }
            
            if(mid-sum  >= k){
                end = mid-1;
                ans = mid;
            }else{
                st = mid+1;
            }
        }
        
        if(ans == n+1) return 0;
        
        return n-ans+1;
    }
};