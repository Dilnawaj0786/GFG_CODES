class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int st = 0;
        int end = n-1;
        if(n % 2 != 0){
           int mid = st + (end-st)/2;
           return arr[mid];
        }else{
             int mid = st + (end-st)/2;
            double median =( arr[mid] + arr[mid+1]) / 2.0;
            return median;
        }
    }
};