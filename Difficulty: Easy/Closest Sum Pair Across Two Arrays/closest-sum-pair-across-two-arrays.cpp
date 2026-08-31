class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int st = 0;
        int j = arr2.size() - 1;
        int ans1 = -1;
        int ans2 = -1;
        int diff = INT_MAX;
        while (st < arr1.size() && j >= 0) {
            int sum = arr1[st] + arr2[j];
            if (abs(sum - x) < diff) {
                diff = abs(sum - x);
                ans1 = arr1[st];
                ans2 = arr2[j];
            }
            if (sum == x) {
                return {arr1[st], arr2[j]};
            }
            else if (sum < x) {
                st++;
            }
            else {
                j--;
            }
        }
        return {ans1, ans2};
    }
};