class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int k = 1;
        for(int i=2;i<arr.size();i+=2){
            arr[k++] = arr[i];
        }
        arr.resize(k);
        return arr;
    }
};