class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int> ans (2);
        int n= arr.size();
        int repeat = 0;
        long long sum = 0;
        sort(arr.begin(),arr.end());
        
        for(int ele : arr){
            sum += ele;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i] == arr[i+1]){
                repeat = arr[i];
                break;
            }
        }
        long long actual = 1LL * n *(n+1)/2;
        
        long long missing = actual - sum + repeat;
        
        ans[0] = repeat;
        ans[1] = missing;
        return ans;
    }
};