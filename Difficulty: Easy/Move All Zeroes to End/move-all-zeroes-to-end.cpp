class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j = 0;
        int i = 0;
        while(j < arr.size()){
            if(arr[i] == 0 && arr[j] != 0){
                swap(arr[i],arr[j]);
                i++;
            }
            else if(arr[i] != 0) i++;
            j++;
        }
    }
};