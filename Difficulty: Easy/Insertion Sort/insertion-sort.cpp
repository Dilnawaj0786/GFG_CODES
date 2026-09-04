class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int j =1;
        int n = arr.size();
        while(j < n){
            int i = j;
            while(i > 0 && arr[i] < arr[i-1]){
                swap(arr[i],arr[i-1]);
                i--;
            }
            j++;
        }
        
    }
};