class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            int min_val = arr[i];
            int idx = i;
            
            for(int j=i;j<arr.size();j++){
                if(arr[j] < min_val){
                    min_val = arr[j];
                    idx = j;
                }
            }
            swap(arr[i],arr[idx]);
        }
    }
};