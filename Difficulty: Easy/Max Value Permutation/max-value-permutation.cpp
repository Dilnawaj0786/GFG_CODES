class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        long long sum = 0;
        for(int i=0;i<arr.size();i++){
            sum += (arr[i]*i);
        }
        
        return sum % (1000000007);
    }
};