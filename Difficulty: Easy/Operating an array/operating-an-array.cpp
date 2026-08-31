class Solution {
  public:
    bool searchEle(vector<int>& arr, int x) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x) return true;
        }
        return false;
    }

    void insertEle(vector<int>& arr, int y, int yi) {
        // code here
        arr.push_back(0);
        int n = arr.size();
        int x = n-1;
        while( x > yi ){
            arr[x] = arr[x-1];
            x--;
        }
        
        arr[x] = y;
    }

        
    void deleteEle(vector<int>& arr, int z) {
        // code here
        int idx = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == z){
                idx = i;
                break;
            }
        }
        if(idx != -1){
            for(int i = idx; i < arr.size() - 1; i++) {
                arr[i] = arr[i + 1];
            }
            arr.resize(arr.size()-1);
        }
    }
};