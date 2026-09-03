
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int st = 0;
        int end = 1;
        int n = arr.size()-1;
        while(end <= n){
            if(arr[end] - arr[st] == x){
                return true;
            }
            else if(arr[end] - arr[st] < x){
                end++;
            }
            else{
                st++;
            }
            
            if(st == end){
                end++;
            }
        }
        return false;
    }
};
