class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        set<int> s;
        for(int x : arr){
            s.insert(x);
        }
        int ans = 1;
       while(s.find(ans) != s.end()){
           ans++;
       }
       return ans;
        
    }
};