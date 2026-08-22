class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int length = 0;
        int idx = -1;
        for(int i=0;i<arr.size();i++){
            int n = arr[i].size();
            if(n > length){
                length = n;
                idx = i;
            }
        }
        return arr[idx];
        
    }
};
