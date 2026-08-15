class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            int swaps = 0;
            for(int j=0;j<arr.size()-1-i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swaps++;
                }
            }
            if(swaps == 0) break;
        }
    }
};