class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
       int n= arr.size();
       for(int i=0;i<n-1;i++){
           bool swaps = false;
           for(int j =0;j<n-1-i;j++){
               if(arr[j] > arr[j+1]){
                   swap(arr[j],arr[j+1]);
                   swaps = true;
               }
           }
           if(!swaps) return;
       }
    }
};